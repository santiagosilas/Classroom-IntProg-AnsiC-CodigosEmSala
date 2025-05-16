#include<stdio.h>
int main(){
    float nota, menorNota=10, maiorNota=0, soma = 0, media;
    for(int i=1;i<=7;i++){
        printf("nota:");scanf("%f", &nota);
        soma+=nota;
        if(nota > maiorNota) maiorNota = nota;
        if(nota< menorNota) menorNota = nota;
    }

    soma = soma - (menorNota+maiorNota);
    media = soma / 5;
    printf("media: %.4f\n", media);
}
