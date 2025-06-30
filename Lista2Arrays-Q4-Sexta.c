/**
4.Faça um programa que simule um lançamento de dados.
Lance o dado 100 vezes e armazene os resultados em um vetor.
Depois, mostre quantas vezes cada valor foi conseguido.
Dica: use um vetor de contadores(1-6) e uma função para gerar
números aleatórios, simulando os lançamentos dos dados.
Use a função rand(), definida em stdlib.h, para gerar números
inteiros aleatórios. */

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
