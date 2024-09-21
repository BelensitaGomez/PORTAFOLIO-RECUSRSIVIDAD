#include "arreglo.h"

Arreglo::Arreglo(int n) {
    tam=n;
    ar=new int[n];
    pideDatos();
}
int Arreglo::sumar(){
    return sumar(0);
}
int Arreglo ::sumar(int n){
    if(n==tam-1) return ar[n];
    return ar[n] +sumar(n+1);
}
void Arreglo::pideDatos(){
    for(int i=0;i<tam;i++){
        cout<<"Elemento["<<i<<"] ";
        cin>> ar[i];
    }
}
