#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    float divreal;
    printf("input:");
    scanf("%d %d", &a, &b);
    divreal = 1. * a / b;
    printf("soma = %f\n", divreal);
    return 0;
}
