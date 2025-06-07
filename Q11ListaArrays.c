#include<stdio.h>
void modificar(int x, char c, float f, double d,
               int v[ ], char u[ ] ){
  x = 42;c='Q';f=42.42;d=42.42;
  v[0]=v[1]=v[2]=7;
  u[0]=u[1]=u[2]='7';
}
int main(){
    int X=1;char C='a';float F=2.5;
    double D=2.5;int V[3];char U[3];
    V[0]=V[1]=V[2]=1;
    U[0]=U[1]=U[2]='a';
    modificar(X,C,F,D,V,U);
    //printf();
    return 0;
}
