/// 15. Elabore um algoritmo que permita a entrada de tr�s
/// valores e fa�a a contagem desde o primeiro deles at� o
/// segundo com passo (incremento) dado pelo terceiro.
/// Passo � o valor de incremento, ex.: �Para i de um at� n passo 1�.
#include<stdio.h>
int main(){
    int i, ini, fim, incr;
    scanf("%d%d%d", &ini, &fim, &incr);

    for(i = ini;i <= fim;i += incr) {
         printf("%d ", i);
     }



}
