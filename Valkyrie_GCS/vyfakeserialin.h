#ifndef FAKESERIALIN_H
#define FAKESERIALIN_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QPlainTextEdit>
#include "vyserialin.h"




class VyFakeSerialIn: public QObject
{
    Q_OBJECT
public:

    QByteArray readBuffer;
    telemetry data;
    bool dataIsRead;
    QSerialPort *port;
    QObject *parent;
    QPlainTextEdit *term;

    void parseData(QByteArray buff);
    void writeData(QString data);

    struct Settings{
        QString name;
        qint32 baudRate;
        QString stringBaudRate;
        QSerialPort::DataBits dataBits;
        QString stringDataBits;
        QSerialPort::Parity parity;
        QString stringParity;
        QSerialPort::StopBits stopBits;
        QString stringStopBits;
        QSerialPort::FlowControl flowControl;
        QString stringFlowControl;
        bool localEchoEnabled;
    };


    VyFakeSerialIn(QObject *parent, QPlainTextEdit * term, QString addr);
    ~VyFakeSerialIn();
    int openPort(QString portName = nullptr);
    int closePort();

    QList<QString> availablePorts();
public slots:
    void readData();

private:

    //struct telemetry{

    //    QString teamID;
    //    int missionTime;
    //    int packetCount;
    //    double altitude;
    //    double pressure;
    //    double temp;
    //    double voltage;
    //    double gpsTime;
    //    double gpsLat;
    //    double gpsLong;
    //    double gpsAlt;
    //    double gpsSats;
    //    double airspeed;
    //    int softwareState;
    //    int particleCount;
    //};
    void generateData(QByteArray &readBuffer);

    //VyFakeSerialIn();
};

#endif // FAKESERIALIN_H
