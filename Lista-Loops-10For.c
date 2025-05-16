///10. Escreva  um  algoritmo  para  gerar  a  seqüência  de
///Fibonacci  da  forma  abaixo,  até  o 10º termo:
///0, 1, 1, 2, 3, 5, 8,13, 21, 34.
#include<stdio.h>
int main(){
    int n, i, ant1 = 0, ant2 = 1, prox;
    n = 10; // scanf("%d", &n);

    printf("%d,", 0);
    printf("%d,", 1);
    for(i = 2;i < n;i++;){
        prox = ant1 + ant2;
        printf("%d,", prox);
        ant1 = ant2;
        ant2 = prox;
    }
    printf("i:%d\n", n);
}
