/*
11.Sejam  P(,)  e  Q(,)  dois  pontos  quaisquer  no  plano.  
Escreva  um  algoritmo que leia os pares de coordenada x e y e 
calcule a distância entre estes dois pontos.
*/
#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2,z1,z2, dist;
    printf("pontos:");
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &z1, &x2, &y2, &z2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2) +pow(z2-z1,2));
    printf("dist = %lf\n", dist);
    return 0;
}