/**
4.Fa�a um programa que simule um lan�amento de dados.
Lance o dado 100 vezes e armazene os resultados em um vetor.
Depois, mostre quantas vezes cada valor foi conseguido.
Dica: use um vetor de contadores(1-6) e uma fun��o para gerar
n�meros aleat�rios, simulando os lan�amentos dos dados.
Use a fun��o rand(), definida em stdlib.h, para gerar n�meros
inteiros aleat�rios. */

#include<stdio.h>
#include<stdlib.h>
void jogar(int v[], int n){
    for(int i=0;i<n;i++){
        v[i] = 1 + rand()%6;
        printf("%d, ", v[i]);
    }
}
void imprimir(int v[], int n){
    for(int i=0;i<n;i++)
        printf("%d, ", v[i]);
    printf("\n");
}
void calcularFrequencia(int v[], int n, int cont[]){
    for(int i=0;i<6;i++) cont[i] = 0; // Zerar os contadores
    for(int i=0;i<n;i++){
        cont[ v[i]-1 ]++;
        ///switch(v[i]){
        ///    case 1: cont[0]++;break;
        ///    case 2: cont[1]++;break;
        ///    case 3: cont[2]++;break;
        ///    case 4: cont[3]++;break;
        ///    case 5: cont[4]++;break;
        ///    case 6: cont[5]++;break;
        ///}
    }
}
int main(){
    int numeroDeJogadas = 100;
    int frequencia[6];
    int jogadas[numeroDeJogadas];
    jogar(jogadas, numeroDeJogadas);
    imprimir(jogadas, numeroDeJogadas);
    calcularFrequencia(jogadas, numeroDeJogadas, frequencia);
    imprimir(frequencia, 6);
    return 0;
}
