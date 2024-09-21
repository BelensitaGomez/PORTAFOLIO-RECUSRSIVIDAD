#ifndef MAT_H
#define MAT_H
#include <iostream>
using namespace std;

class Mat
{
private:
    int ren;
    int col;
    int **mat;
    void pideDatos();

public:
    Mat(int,int);
    int suma();
};

#endif // MAT_H
