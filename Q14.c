#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define X 0
#define Y 1
#define linhas 1000
#define maxvalue 100

//void calcDist(int p)

int main(){
    float d, dmin = maxvalue;
    int dados[linhas][2], ponto[2], closest;
    /// Ponto de Entrada
    ponto[X] = ponto[Y] = 10;
    /// Inicializacao dos dados
    for(int i=0;i<linhas;i++)
        for(int j = 0; j<2;j++)
            dados[i][j] = rand()%maxvalue;
    /// Percorrer cada data point
    for(int i=0;i<linhas;i++){
        d = sqrt(
                 pow(ponto[0]-dados[i][0],2)+
                 pow(ponto[1]-dados[i][1],2));
        printf("%d %.4f\n", i, d);
        if(d < dmin) {
                dmin = d;
                closest = i;
        }
    }
    printf("closest: %d, %.2f (%d,%d)\n",
           closest, dmin, dados[closest][0],
                    dados[closest][1]);
    return 0;
}
