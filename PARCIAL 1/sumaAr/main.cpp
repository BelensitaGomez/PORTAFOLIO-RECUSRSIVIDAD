#include <QCoreApplication>
#include "arreglo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n;
    cout<<"Cuantos elementos: ";
    cin>>n;
    Arreglo ar(n);
    cout<<"Suma= " <<ar.sumar()<<endl;
    return a.exec();

    return a.exec();
}
