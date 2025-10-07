#ifndef SERIAL_PORT_H
#define SERIAL_PORT_H
#include <QSerialPort>
#include <QObject>

class serial_port : public QObject //Klasa seria_port jest obiektem qt
{
public:
    explicit serial_port(QObject *parent = nullptr); //Ochrona przed konwersjami przez kompilator
    bool connect(QString portName); //Metoda otwierająca port dla określonych parametrów
    qint64 write(QByteArray data); //Metoda wysyłająca tablicę bajtów na port
    ~serial_port();

signals:
    void dataReceived(QByteArray); //Sygnał przekazujący dane z portu, 1 char = 1 bajt

private slots:
    void dataReady();

private:
    QSerialPort *_serialPort; //Wskaźnik na klasę obsługującą port.
    Q_OBJECT
};

#endif // SERIAL_PORT_H
