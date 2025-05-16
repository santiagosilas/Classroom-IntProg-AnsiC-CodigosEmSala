/// Peça ao usuário para digitar uma senha.
/// Repita até que ele digite a senha correta.
/// Exemplo de senha: "1234"
#include<stdio.h>
#include<stdlib.h>
int main(){
    int resposta;
    printf("resposta:");
    scanf("%d", &resposta);
    while(resposta != 7){
        printf("resposta:");
        scanf("%d", &resposta);
    }

    do {
        printf("resposta:");
        scanf("%d", &resposta);
    } while(resposta != 7);

    return 0;
}
