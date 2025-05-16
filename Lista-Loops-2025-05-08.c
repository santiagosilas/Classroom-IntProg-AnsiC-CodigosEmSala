/// Peça ao usuário para digitar uma senha.
/// Repita até que ele digite a senha correta.
/// Exemplo de senha: "1234"
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    char S[9], senha[9];
    S[0] = '1'; S[1] = '2'; S[2] = '3';
    S[3] = '4'; S[4] = '5';S[5] = '6';
    S[6] = '7';S[7] = '8';S[8] = '\0';
    printf("Senha correta:%s\n", S);

    int cont = 0;
    while(cont != 8){
        /// Verificacao de Senha
        printf("Senha:");
        fgets(senha, sizeof(senha), stdin);
        cont = 0;
        for(i=0;i<8;i++){
            if(S[i]==senha[i])
                cont++;
            else {
                printf("Falha no login!");
                break;
            }
        }
        if(cont == 8){
           printf("Usuario autenticado!");
        }
        /// Fim da Verificacao de Senha
    }
    return 0;
}
