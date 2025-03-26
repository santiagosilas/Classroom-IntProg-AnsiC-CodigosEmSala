#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float x, y, expr;
    scanf("%f%f", &x, &y);
    expr = pow(x, y);
    printf("%f", expr);
    return 0;
}
