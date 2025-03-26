#include<stdio.h>
int main(){
    int a, b, soma,sub,mult,divint,restodivint;
    printf("input:");
    scanf("%d %d", &a, &b);
    soma = a + b;
    sub = a - b;
    mult = a * b;
    divint = a / b;
    restodivint = a % b;
    printf("soma = %d\n", soma);
    printf("sub = %d\n", sub);
    printf("mult = %d\n", mult);
    printf("divint = %d\n", divint);
    printf("resto = %d\n", restodivint);
    return 0;
}
