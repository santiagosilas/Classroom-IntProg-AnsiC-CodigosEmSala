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

int main(){
  //sePar(42);
  //Procedimento();
  return 0;
}
