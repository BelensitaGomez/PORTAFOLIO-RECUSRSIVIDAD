#include <QCoreApplication>
#include "operaciones.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n,b;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    Operaciones op(n);
    op.ordenBurbuja();
    cout << endl;
    op.imprime();
    while(true){
        cout << "Valor a buscar: ";
        cin >> b;
        if (b==-1)break;
        int res = op.busquedaBinariaRecursiva(b, 0, n);
        if (res < 0) cout << "Numero no encontrado";
        cout << "El " << b << " está en la posicion " << res;
        cout << endl;
    }


    return a.exec();
}
