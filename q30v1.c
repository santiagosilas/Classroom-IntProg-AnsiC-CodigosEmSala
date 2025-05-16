/**
30. O Departamento Estadual de Meteorologia lhe contratou para
desenvolver um programa que leia as um conjunto indeterminado de
temperaturas, e informe ao final a menor e a maior temperaturas
informadas, bem como a média das temperaturas
*/
#include<stdio.h>
//#include<math.h>
#define INFINITY 999
int main(){
    int n, i = 0;
    float temp, tempMaior = -INFINITY, tempMenor = INFINITY, tempMedia = 0;
    printf("n:");scanf("%d", &n);
    while(i < n){
        printf("temp:");scanf("%f", &temp);
        if(temp < tempMenor) tempMenor = temp;
        if(temp > tempMaior) tempMaior = temp;
        tempMedia += temp;
        i++;
    }
    printf("sum: %f\n", tempMedia);
    tempMedia = tempMedia / n;
    printf("min:%f max:%f mean:%f\n", tempMenor, tempMaior, tempMedia);
    return 0;
}
