#include "mat.h"

Mat::Mat(int r,int col) {
    ren=r;
    this->col=col;
    mat=new int*[ren];
    for(int i=0;i<ren;i++)
        mat[i]=new int [col];
    pideDatos();
}
void Mat::pideDatos(){
    for(int i=0;i<ren;++i)
        for(int j=0;j<col;j++){
            cout<<"Mat["<<i<<","<<j<<"] = ";
            cin>> mat[i] [j];
        }
}
int Mat::suma(){
    int sum=0;
    for(int i=0;i<ren;++i)
        for(int j=0;j<col;++j)
            sum+=mat[i][j];
    return sum;

}
