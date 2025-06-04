/**
3. Escrever um programa em C para calcular a distância euclidiana
entre dois pontos A(x, y) e B(x, y) fornecidos do teclado.
O programa deverá possuir apenas as seguintes variáveis
(não declare outras variáveis):
double PontoA[2]; double PontoB[2]; double Resultado;
*/
#include<stdio.h>
#include<math.h>
#define X 0
#define Y 1

void readData(double A[], double B[]){
    printf("A(x, y):");
    scanf("%lf%lf", &A[X],&A[Y]);
    printf("B(x, y):");
    scanf("%lf%lf", &B[X],&B[Y]);
}
double CalcDist(double A[], double B[]){
 return sqrt(pow(B[X]-A[X], 2) + pow(B[Y]-A[Y], 2));
}
int main(){
    double PontoA[2], PontoB[2], Resultado;
    readData(PontoA, PontoB);
    Resultado = CalcDist(PontoA, PontoB);
    printf("Dist:%.4lf\n", Resultado);
    return 0;
}
