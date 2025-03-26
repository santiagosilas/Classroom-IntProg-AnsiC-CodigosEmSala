#include<stdio.h>
#include<math.h>
int main(){
    int a, b,c,d, res;
    printf("input:");
    scanf("%d%d%d%d", &a, &b,&c,&d);
    res = a*b - c*d;
    printf("res = %d\n", res);
    return 0;
}
