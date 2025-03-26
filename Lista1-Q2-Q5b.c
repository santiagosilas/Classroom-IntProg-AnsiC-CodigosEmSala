#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    printf("input:");
    scanf("%d %d", &a, &b);
    printf("soma = %d\n", a + b);
    printf("sub = %d\n", a - b);
    printf("mult = %d\n", a * b);
    printf("divint = %d\n", a / b);
    printf("resto = %d\n", a % b);
    printf("pot = %.1lf\n", pow(a, b));
    printf("raiz = %.1lf\n", sqrt(a));
    return 0;
}
