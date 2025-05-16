/// 15. Elabore um algoritmo que permita a entrada de três
/// valores e faça a contagem desde o primeiro deles até o
/// segundo com passo (incremento) dado pelo terceiro.
/// Passo é o valor de incremento, ex.: “Para i de um até n passo 1”.
#include<stdio.h>
int main(){
    int i, ini, fim, incr;
    scanf("%d%d%d", &ini, &fim, &incr);

    for(i = ini;i <= fim;i += incr) {
         printf("%d ", i);
     }



}
