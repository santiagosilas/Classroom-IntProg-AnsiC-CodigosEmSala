///10. Escreva  um  algoritmo  para  gerar  a  seq��ncia  de
///Fibonacci  da  forma  abaixo,  at�  o 10� termo:
///0, 1, 1, 2, 3, 5, 8,13, 21, 34.
/// FOr the Future, SOlve this with Array!
#include<stdio.h>
int main(){
    int values[10], n = 10;
    int n, i = 2;
    values[0] = 0;
    values[1] = 1;
    printf("%d,", values[0]);
    printf("%d,", values[1]);
    while(i < n){
        prox = ant1 + ant2;
        printf("%d,", prox);
        ant1 = ant2;
        ant2 = prox;
        i++;
    }
    printf("i:%d\n", n);
}
