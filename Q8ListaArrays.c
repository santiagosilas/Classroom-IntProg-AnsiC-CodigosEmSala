#include<stdio.h>
#include<stdlib.h>

//void initRand(int V[], int n){
//    V[i] = rand()
//}

void inicComValor(int v[], int n, int valor){
    for(int i = 0; i<n;i++)
        v[i] = valor;
}

int main(){
    int valores[10], valorInit = 7;

    inicComValor(valores, 10, 7);

    for(int i = 0; i<10;i++)
        printf("%d\t", valores[i]);
    printf("\n");

    return 0;
}
