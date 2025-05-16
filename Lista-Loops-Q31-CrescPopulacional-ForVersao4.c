/** 31. Supondo que a população de um país A
 seja da ordem de 80000 habitantes com uma taxa
 anual de crescimento de 3% e que a população de B
 seja 200000 habitantes com uma taxa de crescimento
 de 1.5%. Faça um programa que calcule e escreva o
 número de anos necessários para que a população do
 país A ultrapasse ou iguale a população do país B,
  mantidas as taxas de crescimento.*/

#include<stdio.h>
int main(){
    int popA, popB, anos;

    /// Funciona quase que semelhante . . .
    ///for(INIC;COND;PASSOS)
    for(
        popA = 80000, popB = 200000, anos = 0;
        popA < popB;
        popA *= 1.03, popB *= 1.015, anos += 1) {
        printf("ano:%d A:%d B:%d\n", 2025 + anos, popA, popB);

    }
    printf("anos decorridos:%d\n", anos);
    return 0;
}
