#include<stdio.h>
#include<math.h>
// exp(n) == pow(e, n)
// 2.71
#define PI 3.14
int main(){
    float x, u, o;
    float num, den, res;
    scanf("%f%f%f",&x,&u,&o);
    
    num = exp(-pow(log(x) - u, 2)/(2*pow(o, 2)));
    den = 1/(x*o*sqrt(2*PI));
    res = num/den;
    printf("%.2f\n", res);

    return 0;
}