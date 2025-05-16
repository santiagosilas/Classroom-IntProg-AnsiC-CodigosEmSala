#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double soma = 0;
    printf("n:");scanf("%d", &n);
    for(int k=1; k <= n; k++){
        soma = soma + (
            1/pow(5,k) - 1/pow(5,k+1)
        );
    }
    printf("res:%.5lf\n",soma);
    return 0;
}
