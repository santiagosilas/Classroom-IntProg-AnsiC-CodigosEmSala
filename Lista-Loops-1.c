///13. O fatorial de um número n, indicado por n!,
/// é dado pela multiplicação deste número por todos os inteiros
/// entre 1 e n. Por exemplo, 6! = 6*5*4*3*2*1 = 720. Por definição, 0!=1. Desenvolver o algoritmo para um
#include<stdio.h>
int main(){
    int n = 6, prod = 1;
    while(n > 0){
        prod = prod * n;
        n--;
    }
    printf("%d", prod);
}
