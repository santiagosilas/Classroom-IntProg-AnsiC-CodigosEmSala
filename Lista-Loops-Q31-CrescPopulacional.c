/** 31. Supondo que a popula��o de um pa�s A
 seja da ordem de 80000 habitantes com uma taxa
 anual de crescimento de 3% e que a popula��o de B
 seja 200000 habitantes com uma taxa de crescimento
 de 1.5%. Fa�a um programa que calcule e escreva o
 n�mero de anos necess�rios para que a popula��o do
 pa�s A ultrapasse ou iguale a popula��o do pa�s B,
  mantidas as taxas de crescimento.*/

// Q31
#include<stdio.h>
int main(){
    int popA = 80000, popB = 200000, anos = 0;
    do {
        popA *= 1.03; /// popA = popA + 3/100 de popA
        popB *= 1.015;
        anos += 1;
        printf("ano:%d A:%d B:%d\n", 2025 + anos, popA, popB);
    }while(popA < popB);
    printf("anos decorridos:%d\n", anos);
    return 0;
}
