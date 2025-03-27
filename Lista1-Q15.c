/*
Elabore um algoritmo que permita a entrada de dois valores inteiros x e y, 
troque os seus valores entre si, e então exiba os novos resultados; 
Use uma variável auxiliar (aux) para trocar os valores das variáveis.
*/
#include<stdio.h>
int main(){
    int a,b,aux;
    scanf("%d%d",&a, &b);
    printf("%d %d\n", a, b);
    aux = a;
    a = b;
    b=aux;
    printf("%d %d\n", a, b);
    return 0;
}