/** 28. Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
qualquer n�mero inteiro entre 1 at� 10. O usu�rio deve informar de
qual n�mero ele deseja ver a tabuada.*/
#include<stdio.h>
int main(){
    int n;
    printf("n:");
    scanf("%d", &n);
    for(int j=1;j<=10;j++)
        printf("%d x %d = %d\n", n, j, n*j);
    return 0;
}
