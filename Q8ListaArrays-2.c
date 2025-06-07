#include<stdio.h>
#include<stdlib.h>
void initRand(int v[], int n){
    for(int i = 0; i<n;i++)
        v[i] = rand() % 100;
}
int main(){
    int valores[10];
    initRand(valores, 10);
    for(int i = 0; i<10;i++)
        printf("%d\t", valores[i]);
    printf("\n");

    return 0;
}
