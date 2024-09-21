#ifndef OPERACIONES_H
#define OPERACIONES_H
#include <iostream>
using namespace std;

class Operaciones
{
private:
    int n;
    int *ar;
public:
    //visto en clase
    Operaciones(int);
    int busquedaBinaria(int);
    //tarea
    int busquedaBinariaRecursiva(int, int, int);
    int buesquedSecuencial();
    void pideDatos();
    void ordenBurbuja();
    void imprime();
};

#endif // OPERACIONES_H
