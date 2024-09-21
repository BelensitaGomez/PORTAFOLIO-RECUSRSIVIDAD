#include "operaciones.h"

Operaciones::Operaciones(int n) {
    this->n=n;
    ar=new int[n];
    pideDatos();
}

int Operaciones::busquedaBinariaRecursiva(int b, int li, int ls) {
    if (li > ls) {
        return -1;
    }

    int med = (li + ls) / 2;

    if (ar[med] == b) {
        return med;
    }

    if (ar[med] > b) {
        return busquedaBinariaRecursiva(b, li, med - 1);
    } else {
        return busquedaBinariaRecursiva(b, med + 1, ls);
    }
}

void Operaciones::pideDatos(){
    for(int i=0;i<n;++i){
        cout<<"Elemento[" <<i<<"]=";
        cin>>ar[i];
    }
}
void Operaciones::ordenBurbuja(){
    /*for (int i = 0;i < n-1; ++i)
        for (int j = i+1; j < n; ++j)
            if (ar[i]>ar[j])
                swap (ar[i], ar[j]);//intercambiar posiciones*/
    //recursiva

}

void Operaciones::imprime() {
    cout << "Arreglo ordenado: "<<endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemento [" << i << "] =" <<ar[i]<< endl;
    }
}
