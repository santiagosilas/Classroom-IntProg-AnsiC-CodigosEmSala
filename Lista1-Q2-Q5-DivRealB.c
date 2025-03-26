#include<stdio.h>
#include<math.h>
int main(){
    int a, b;
    float divreal;
    printf("input:");
    scanf("%d %d", &a, &b);
    divreal = (float) a / b; // convers exp
    divreal =  a / (float) b;
    printf("soma = %f\n", divreal);
    return 0;
}
