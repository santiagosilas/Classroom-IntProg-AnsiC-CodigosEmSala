#include<stdio.h>
#include<stdlib.h>

void preencher(int v[], int n){
    for(int i=0;i<n;i++) v[i] = rand() % 100;
}

void calcular(int v[], int v2[], int n){
    for(int i=0;i<n;i++) v2[i] = v[i] / 10;
}

void imprimir(int v[], int n){
    for(int i=0;i<n;i++) printf("%d ", v[i]);
    printf("\n");
}

int main(){
    int tamanho = tamanho;
    int recargas[tamanho], creditos[tamanho];
    preencher(recargas, tamanho);
    calcular(recargas, creditos, tamanho);
    imprimir(recargas, tamanho);
    return 0;
}
