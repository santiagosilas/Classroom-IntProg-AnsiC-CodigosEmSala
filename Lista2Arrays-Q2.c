#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main(){
    char nomes[5][MAX];
    float notas[5];
    for(int i = 0; i < 5; i++){
        printf("nome:");fgets(nomes[i], sizeof(nomes[i]), stdin);
        printf("nota:");scanf("%f", &notas[i]);
        getchar();
    }
    float menorNota = 11;
    float maiorNota = -1;
    float mediaNotas = 0;
    int  indiceMenor, indiceMaior;
    for(int i = 0; i < 5; i++){
        if(notas[i] < menorNota){
            menorNota = notas[i];
            indiceMenor = i;
        }
        if(notas[i] > maiorNota){
            maiorNota = notas[i];
            indiceMaior = i;
        }
        mediaNotas += notas[i];
    }
    mediaNotas = mediaNotas / 5;
    for(int i = 0; i < 5; i++)
        printf("%s\t%f\n", nomes[i], notas[i]);
    printf("Menor nota: %f (%s)\n", notas[indiceMenor], nomes[indiceMenor]);
    printf("Maior nota: %f (%s)\n", notas[indiceMaior], nomes[indiceMaior]);
    printf("Media: %f\n", mediaNotas);
    return 0;
}
