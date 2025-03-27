/*
16.Refaça o algoritmo anterior com as seguintes exigências: 
Só podem ser usadas duas variáveis (x e y). 
Dica: use as operações de adição e subtração.       
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14
#define E 2.71
int main(){
    float x, f, p1,p2;
    scanf("%f",&x);
    p1 = pow(E, -pow(x,2)/2);
    //p1 = exp(-pow(x,2)/2);
    p2 = 1/sqrt(2*PI);
    f = p1 * p2;
    printf("%f\n", f);

    return 0;
}