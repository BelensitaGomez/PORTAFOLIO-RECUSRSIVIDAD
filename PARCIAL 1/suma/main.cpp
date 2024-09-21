#include "arreglo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int n;
    cout<<"Cuantos elementos: ";
    cin>>n;
    Arreglo ar(n);
    cout<<"Suma= " <<ar.sumar()<<endl;
    return a.exec();
}
