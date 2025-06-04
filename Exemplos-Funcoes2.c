#include<stdio.h>


int divInteira(int a, int b);
float divReal(int a, int b);

float calcMedia(float n1, float n2){
    float media = (n1*2+n2*3)/5;
    return media;
}

int main(){
    float nota1=7.9, nota2 = 7.5;
    printf("Media:%.2f\n", calcMedia(nota1,nota2));
    //int numero = 42;
    //printf("div int:%d\n", divInteira(5, 2));
    //printf("div real:%f\n", divReal(5, 2));
    return 0;
}
int divInteira(int a, int b){
    return a / b;
}
float divReal(int a, int b){
    return (float) a / b;
}
