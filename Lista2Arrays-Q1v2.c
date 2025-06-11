#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void preencher(int m[][MAX], int n){
    for(int i = 0; i< n; i++) m[0][i] = rand()%100;
    //for(int i = 0; i< n; i++) m[1][i] = 0; // desnecessário para a lógica
}

void calcular(int m[][MAX], int n){
    for(int i = 0; i< n; i++) m[1][i] = m[0][i] / 10;
}

void imprimir1(int m[][MAX], int linha, int n){
    for(int i = 0; i< n; i++)
        printf("%d ", m[linha][i]);
    printf("\n");
}
void imprimir2(int m[][MAX], int n){
    for(int col = 0; col < n; col++){
        for(int row = 0; row < 2; row++)
            printf("%d\t", m[row][col]);
        printf("\n");
    }
}

void imprimir3(int m[][MAX], int n){
    for(int col = 0; col < n; col++)
        printf("%d\t", m[0][col]);
    printf("\n");
    for(int col = 0; col < n; col++)
        printf("%d\t", m[1][col]);
    printf("\n");
}

void imprimir4(int m[][MAX], int n){
    for(int row = 0; row < 2; row++){
        for(int col = 0; col < n; col++)
            printf("%d\t", m[row][col]);
        printf("\n");
    }
}

int main(){
    int dados[2][100];
    preencher(dados, 100);
    calcular(dados, 100);
    //imprimir1(dados, 0, 100);
    imprimir2(dados, 50);
    //imprimir3(dados, 50);
    return 0;
}
