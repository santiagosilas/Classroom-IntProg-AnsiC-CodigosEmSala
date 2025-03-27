#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    float raio, vol;
    printf("raio:");
    scanf("%f", &raio);
    vol = 4.0/3 * PI * pow(raio, 3);
    printf("Volume: %.4f\n", vol);
    return 0;
}