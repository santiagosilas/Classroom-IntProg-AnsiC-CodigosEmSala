/** 11. Sejam a e b dois números inteiros lidos do teclado.
Escreva um algoritmo que determine a soma dos n
primeiros números múltiplos de a e b,
dado um  número n.*/
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
