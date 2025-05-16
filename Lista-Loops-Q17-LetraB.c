#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double soma = 0;
    printf("n:");scanf("%d", &n);
    for(int i=1; i <= n; i++)
        soma = soma + (
            (i+1.)/(2*i-1) - (i+2.)/(2*i+1)
        );

    printf("res:%.5lf\n",soma);
    return 0;
}
