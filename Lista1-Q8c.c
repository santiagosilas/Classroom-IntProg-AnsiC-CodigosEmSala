#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float x, y, expr;
    scanf("%f%f", &x, &y);
    expr = pow(x, y) + 3*x + 1/pow(x+1, y);
    printf("%f", expr);
    return 0;
}
