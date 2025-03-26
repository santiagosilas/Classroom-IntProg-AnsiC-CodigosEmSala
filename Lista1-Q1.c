#include<stdio.h>
int main(){
    int a, b, result;
    printf("input:");
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("%d+%d=%d\n", a, b, result);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d+%d=%d\n", a, b, result = a + b);
    return 0;
}
