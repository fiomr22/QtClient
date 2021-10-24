#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include<QDebug>
#include<QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private slots:

//    void on_pBtn_Close_clicked();
    void requestMessage();
     void readMessage();
     void showError();
private:
     //Interfaz del UI
    Ui::Client *ui;
    //variable socket cliente
    QTcpSocket *clientSocket=nullptr;
    //canal
    QDataStream in;
};
#endif // CLIENT_H
