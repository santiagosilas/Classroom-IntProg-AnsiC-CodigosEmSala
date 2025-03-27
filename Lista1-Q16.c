/*
16.Refaça o algoritmo anterior com as seguintes exigências: 
Só podem ser usadas duas variáveis (x e y). 
Dica: use as operações de adição e subtração.       
*/
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a, &b);
    printf("%d %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    return 0;
}