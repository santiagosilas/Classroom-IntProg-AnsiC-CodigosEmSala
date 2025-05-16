/*
Faixa 1: 1 <= n <= 5
Faixa 2: 7 >= n > 5
Faixa 3: n > 7 e n <= 10
*/
#include<stdio.h>
int main(){
    int x;
    x = 1;
    switch(x){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: printf("F1");break;
    case 6:
    case 7: printf("F2");break;
    case 8:
    case 9:
    case 10: printf("F3");break;

    }

    return 0;
}
