/** 28. Variação - Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
qualquer número inteiro entre 1 até 10. O usuário deve informar de
qual número ele deseja ver a tabuada.*/
#include<stdio.h>
int main(){
    int n;
    printf("n:");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}
