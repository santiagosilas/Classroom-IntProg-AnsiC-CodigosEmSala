/*
11.Sejam  P(,)  e  Q(,)  dois  pontos  quaisquer  no  plano.  
Escreva  um  algoritmo que leia os pares de coordenada x e y e 
calcule a distância entre estes dois pontos.
*/
#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2, dist;
    printf("pontos:");
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("dist = %lf\n", dist);
    return 0;
}