#include<stdio.h>
#include<stdlib.h>
int main(){
    int m[5][3];
    /// Inicialização
    for(int i = 0; i< 5;i++)
        for(int j = 0; j<3;j++)
            m[i][j] = rand()%10;
    /// Impressão
    for(int i = 0; i< 5;i++){
        for(int j = 0; j<3;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
