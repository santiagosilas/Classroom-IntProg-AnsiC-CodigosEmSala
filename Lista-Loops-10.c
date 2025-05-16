///10. Escreva  um  algoritmo  para  gerar  a  seqüência  de
///Fibonacci  da  forma  abaixo,  até  o 10º termo:
///0, 1, 1, 2, 3, 5, 8,13, 21, 34.
#include<stdio.h>
int main(){
    int n, i, ant1 = 0, ant2 = 1, prox;
    n = 10; // scanf("%d", &n);
    i = 2;
    printf("%d,", 0);
    printf("%d,", 1);
    while(i < n){
        prox = ant1 + ant2;
        printf("%d,", prox);
        ant1 = ant2;
        ant2 = prox;
        i++;
    }
    printf("i:%d\n", n);
}
