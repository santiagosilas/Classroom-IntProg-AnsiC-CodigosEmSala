#include<stdio.h>

void Procedimento(){
    int x = 10;
    printf("%d\n", x);
}

void sePar(int x){
    if(x%2==0)
        printf("%d eh par\n", x);
    else
        printf("%d eh impar\n", x);
}

int sePar2(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}

int incrementar(int x){
    x++;
    return x;
}

int main(){
    int numero = 42;
    printf("numero:%d\n", incrementar(numero));









    //int vejaSePar = sePar2(numero);
    //printf("par ? %d\n", vejaSePar);
  //sePar(42);
  //Procedimento();
  return 0;
}
