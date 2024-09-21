#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>
using namespace std;

class Arreglo
{
private:
    int tam;
    int *ar;
    int sumar(int);
    void pideDatos();
public:
    Arreglo(int);
    int sumar();

};

#endif // ARREGLO_H
