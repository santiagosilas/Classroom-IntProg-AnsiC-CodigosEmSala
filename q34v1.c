/**
34. Fa�a um programa que leia uma quantidade indeterminada de n�meros positivos e conte
quantos deles est�o nos seguintes intervalos:
[0-25), [25-50), [50-75) e [75-100].
A entrada de dados dever� terminar quando for lido um n�mero negativo.
*/
#include<stdio.h>
int main(){
    int num = 0, int1=0,int2=0,int3=0,int4=0;
    while(num >= 0){
        printf("num:");scanf("%d", &num);
        if(num >= 0 && num < 25) int1++;
        else if(num >= 25 && num < 50) int2++;
        else if(num >= 50 && num < 75) int3++;
        else if(num >= 75 && num <= 100) int4++;
    }
    printf("%d %d %d %d\n", int1,int2,int3,int4);
    return 0;
}
