#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float vol, raio;
    printf("raio:");
    scanf("%f", &raio);
    vol = 4.0/3 * PI * pow(raio, 3);
    printf("volume = %.4f\n", vol);

    vol = (float) 4/3 * PI * pow(raio, 3);
    printf("volume = %.4f\n", vol);
    return 0;
}
