#include<stdio.h>
#define MAX 20 /// Valor Arbitrário

int CalcNotasAcimaDaMedia(float N[], int n, float m){
    int qtdeAcima = 0;
    for(int i=0;i<n;i++)
        if(N[i] > m)
            qtdeAcima++;
    return qtdeAcima;
}



int main(){
    int qtde = 0, qtdeAcima = 0; /// Qtde atual de Notas
    float notas[MAX], nota, soma, media;
    while(qtde < MAX){
        printf("Nota:");
        scanf("%f", &nota);
        if(nota == -1)
            break;
        notas[qtde] = nota;
        qtde++;
    }
    /// Qtde de Valores
    printf("Qtde:%d\n", qtde);
    /// Valores lidos
    for(int i=0;i<qtde;i++)
        printf("%.2f,", notas[i]);
    printf("\n");
    /// Soma e Média
    soma = 0;
    for(int i=0;i<qtde;i++)
        soma += notas[i];
    printf("Soma:%.2f\n", soma);
    printf("Media:%.2f\n", soma/qtde);
    /// Qtde de Notas Acima da Média
    qtdeAcima = CalcNotasAcimaDaMedia(notas, qtde, media);
    printf("Qtde de Notas Acima da Media:%d\n", qtdeAcima);
    return 0;
}
