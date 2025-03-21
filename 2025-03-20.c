#include<stdio.h>
int main(){
    int num = 7;
    float a = 1.72;
    double p = 72.5;
    char o = 'A';

    char n[14] = "Fulano de Tal";

    printf("%d %d %p\n", num, sizeof(num), &num);
    printf("%.2f %d %p\n", a, sizeof(a), &a);
    printf("%.2lf %d %p\n", p, sizeof(p), &p);
    printf("%c %d %p\n", o, sizeof(o), &o);
    printf("%s %d %p\n", n, sizeof(n), &n);
    return 0;
}
