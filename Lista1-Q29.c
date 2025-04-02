#include<stdio.h>
#include<math.h>
int main(){
    float m2 = 1000.0; // valor de teste
    float qtdeLitros;
    int qtdeLatas;
    //scanf("%f", &m2);
    qtdeLitros = m2 / 6;
    
    // Situacao 1
    qtdeLatas = ceil(qtdeLitros / 18); 
    printf("%d\n", qtdeLatas);
    // Situacao 2
    printf("%d\n", (int) ceil(qtdeLitros / 3.6));
    // Situacao 3
    qtdeLatas = floor(qtdeLitros / 18);
    
    printf("Latas:%d, Galoes:%d", qtdeLatas, 
        (int) ceil((qtdeLitros - qtdeLatas * 18)/3.6)
    );
     

    return 0;
}