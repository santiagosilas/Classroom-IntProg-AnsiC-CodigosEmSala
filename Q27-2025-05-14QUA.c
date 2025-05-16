#include<stdio.h>
int main(){
    int lengthNome;
    char nome[20], sobrenome[20], nomeCompleto[40];
    printf("nome:");fgets(nome, sizeof(nome), stdin);
    //printf("sobrenome:");fgets(nome, sizeof(nome), stdin);

    /// Verificacoes
    int i;
    for(i=0;nome[i]!='\n';i++)
        printf("nome[%d] = %c.\n", i, nome[i]);
    printf("i:%d bool:%d ch:%c.\n", i, nome[i] == '\n', nome[i]);
    printf("Qtde Caracteres Nome: %d\n", i);
    lengthNome = i;

}
