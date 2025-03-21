#include<stdio.h>
int main(){
    char nome[10];
    printf("nome:");
    //gets(nome);
    //fgets(nome, sizeof(nome), stdin);
    //fgets(nome, 10, stdin);
    //gets(nome);
    scanf("%s", &nome);
    printf("%s\n", nome);
    return 0;
}
