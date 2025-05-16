#include<stdio.h>
int main(){
    double n;
    int totalMS, ms,segs,mins,horas, segundosRestantes, minutosRestantes;
    scanf("%lf", &n);
    totalMS = n * 60 * 1000; //Converter para ms
    ms = totalMS % 1000;
    segundosRestantes = totalMS / 1000;
    segs = segundosRestantes % 60;
    minutosRestantes = segundosRestantes / 60;
    mins = minutosRestantes % 60;
    horas = minutosRestantes / 60;
    printf("%dh %dm %ds %dms", horas,mins,segs, ms);
    return 0;
}