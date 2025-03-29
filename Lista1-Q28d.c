//28.Leia um valor ponto flutuante com duas casas decimais (em outras palavras, espere que o usuário do 
// programa digite um valor com duas casas decimais). Este valor representa um valor monetário. 
// A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
// As notas consideradas são de 100, 50, 10, 5, 2 e 1. 
// As moedas possíveis são de 0.50, 0.25, 0.05 e 0.01. A seguir mostre a relação de notas necessárias (Problema 1021 do Uri Online Judge).
#include<stdio.h>
#include<math.h>
int main(){
    double n = 378.19;
    int temp, quo;

    temp = (int) n / 100;
    printf("Notas de 100: %d\n", temp);
    temp = (int) n % 100; 
    printf("resta: %d\n", temp);

    quo = temp / 50;
    printf("Notas de 50: %d\n", quo);
    temp = temp % 50;
    printf("resta: %d\n", temp);

    quo = temp / 10;
    printf("Notas de 10: %d\n", quo);
    temp = temp % 10;
    printf("resta: %d\n", temp);

    quo = temp / 5;
    printf("Notas de 5: %d\n", quo);
    temp = temp % 5;
    printf("resta: %d\n", temp);

    quo = temp / 2;
    printf("Notas de 2: %d\n", quo);
    temp = temp % 2;
    printf("resta: %d\n", temp);

    quo = temp / 1;
    printf("Notas de 1: %d\n", quo);
    temp = temp % 1;

    n = ceil((n - (int) n) * 100);
    printf("Agora vamos distribuir as moedas %lf...\n", n);
    

    temp = (int) n / 50;
    printf("Notas de 50: %d\n", temp);
    temp = (int) n % 50; 
    printf("resta: %d\n", temp);

    quo = temp / 50;
    printf("Moedas de 50: %d\n", quo);
    temp = temp % 50;
    printf("resta: %d\n", temp);

    quo = temp / 25;
    printf("Moedas de 25: %d\n", quo);
    temp = temp % 25;
    printf("resta: %d\n", temp);

    quo = temp / 10;
    printf("Moedas de 10: %d\n", quo);
    temp = temp % 10;
    printf("resta: %d\n", temp);

    quo = temp / 5;
    printf("Moedas de 5: %d\n", quo);
    temp = temp % 5;
    printf("resta: %d\n", temp);

    quo = temp / 1;
    printf("Moedas de 1: %d\n", quo);
    temp = temp % 1;

    return 0;
}