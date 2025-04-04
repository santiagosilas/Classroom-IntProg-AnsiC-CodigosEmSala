#include<stdio.h>

int main(){
    char nome[10],sobrenome[10], estadoCivil;
    
    fgets(nome, 10, stdin);
    fflush(stdin); 
    scanf(" %c", &estadoCivil);
    printf("nome:%s,estado civil:%c\n", nome, estadoCivil); 

    return 0;
}