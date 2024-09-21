#include <QCoreApplication>
#include "mat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int r,c;
    cout<<"Renglones: ";
    cin>>r;
    cout<<"Columnas: ";
    cin>>c;
    Mat m(r,c);
    cout<<"Suma= "<<m.suma()<<endl;

    return a.exec();
}
