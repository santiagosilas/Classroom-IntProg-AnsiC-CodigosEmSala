/** 11. Sejam a e b dois n�meros inteiros lidos do teclado.
Escreva um algoritmo que determine a soma dos n
primeiros n�meros m�ltiplos de a e b,
dado um  n�mero n.*/
#include<stdio.h>
int main(){
    int i=0,n, a, b, soma = 0;
    printf("n a b:");
    scanf("%d %d %d", &n, &a, &b);
    while(i<n){
        if(i%a==0 && i%b==0){
            soma+= i;
        }
        i++;
    }
    printf("soma:%d\n", soma);
    return 0;
}
