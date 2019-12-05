#include "vyserialin.h"

VySerialIn::VySerialIn(QObject *parent, QPlainTextEdit *term, QString addr): QObject(parent)
{
    this->term = term;
    dataIsRead = false;
    this->parent = parent;
    port = new QSerialPort(parent);
    port->setBaudRate(QSerialPort::Baud115200);
    port->setParity(QSerialPort::NoParity);
    port->setPortName(addr);
    port->setStopBits(QSerialPort::OneStop);
    port->setFlowControl(QSerialPort::NoFlowControl);
}


VySerialIn::~VySerialIn(){
    closePort();
}

int VySerialIn::openPort(QString portName){
    if(portName!=nullptr)
        port->setPortName(portName);
    if(port->open(QIODevice::ReadWrite)){
        return 0;
    } else{
        qInfo("Error: Could not open Port");
        return -1;
    }
}

int VySerialIn::closePort(){
    if(port->isOpen()) port->close();
    else {
        qInfo("Error: Port not open");
        return -1;
    }
    return 1;
}


/**
 * @brief SerialReader::availablePorts
 *
 * @return ports A list of available ports to open.
 *
 * Used to figure out which port the radio is on
 */
QList<QString> VySerialIn::availablePorts(){
    //Uses a QList for high-level array functions
    QList<QString> ports;

    //For each port listed in the available ports
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts()){

        // The xbee will never be on COM1 or COM2 (I think)
        if(QString::compare(port.portName(), "COM1", Qt::CaseInsensitive) != 0
                && QString::compare(port.portName(),"COM2", Qt::CaseInsensitive) != 0)
        {
        // Appends the available port to the list of ports.
        ports.append(port.portName());
        }
    }
    return ports;
}






void VySerialIn::parseData(QByteArray buff)
{
    QString stringData;
    for(int i = 0; i < buff.length(); i++)
    {
        QChar byt = buff.data()[i];
        stringData.append(byt);
     }
    //qInfo()<< stringData<<endl;
    QList<QString> splitData = stringData.split(",");
    term->appendPlainText(stringData);

    if(splitData.length() == 14) {

    data.teamID = splitData[0];
    data.missionTime = splitData[1].toShort();
    data.packetCount = splitData[2].toShort();
    data.altitude = splitData[3].toDouble();
    data.pressure = splitData[4].toDouble();
    data.temp = splitData[5].toDouble();
    data.voltage = splitData[6].toDouble();
    data.gpsTime = splitData[7].toDouble();
    data.gpsLat = splitData[8].toDouble();
    data.gpsLong = splitData[9].toDouble();
    data.gpsAlt = splitData[10].toDouble();
    data.gpsSats = splitData[11].toShort();
    data.softwareState = splitData[12].toInt();
    data.particleCount = splitData[13].toInt();

    dataIsRead = true;
    }

}
void VySerialIn::readData(){
    readBuffer.append(port->readAll());
    if (readBuffer.endsWith("\n")){

      parseData(readBuffer);
      readBuffer.clear();
    }
}


void VySerialIn::writeData(QString data)
{
    QByteArray dataBytes = QByteArray(data.toStdString().c_str());
    port->write(dataBytes);
    port->waitForBytesWritten(50);
}



