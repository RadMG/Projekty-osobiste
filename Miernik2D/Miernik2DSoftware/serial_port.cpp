#include "serial_port.h"

serial_port::serial_port(QObject *parent)
    : QObject{parent}
    , _serialPort(nullptr)
{}


bool serial_port::connect(QString portName)
{
    if (_serialPort != nullptr and _serialPort->isOpen())//Jeżeli wskaźnik na port nie jest pusty i jest otwarty
    {
        _serialPort->close();//Zamyka połączenie
        delete _serialPort;//Usuwa obiekt powiązany z portem
        _serialPort = nullptr; //Ustaw wskaźnik na pusty profilaktycznie
    }
    _serialPort = new QSerialPort(this); //Nowy obiekt powiązany z portem
    _serialPort->setPortName(portName);
    _serialPort->setBaudRate(QSerialPort::Baud115200);
    _serialPort->setDataBits(QSerialPort::Data8);
    _serialPort->setParity(QSerialPort::NoParity);
    _serialPort->setStopBits(QSerialPort::OneStop);
    //Parametry komunikacji dla Arduino UNO

    if (_serialPort->open(QIODevice::ReadWrite))//Otwarcie portu dla urządzenia wysyłającego tekst
    {
        QObject::connect(_serialPort, &QSerialPort::readyRead, this, &serial_port::dataReady); //Wysłanie sygnału do metody dataReady
    }
    return _serialPort->isOpen(); //Jeżeli port otworzył się zwróć prawda
}

void serial_port::dataReady()
{
    if(_serialPort ->isOpen()) //Jeżeli port otwarty
    {
        emit dataReceived(_serialPort->readAll()); //Wyślij dane z portu w formie sygnału
    } else{}
}

qint64 serial_port::write(QByteArray data)
{
    if(_serialPort == nullptr or !_serialPort ->isOpen())
    {
        return -1;
    }else{
       return _serialPort->write(data);
    }
}

serial_port::~serial_port()
{
    if (_serialPort != nullptr)//Jeżeli wskaźnik na port nie jest pusty (istnieje połączenie)
    {
        _serialPort->close();//Zamyka połączenie
        delete _serialPort;//Usuwa obiekt powiązany z portem
    }
}

