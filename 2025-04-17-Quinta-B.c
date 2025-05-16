/*
Faixa 1: 1 <= n <= 5
Faixa 2: 7 >= n > 5
Faixa 3: n > 7 e n <= 10
Faixa 4: n > 10
*/
#include<stdio.h>
int main(){
    int x;
    x = 0;
    switch(x){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:printf("F1");break;
    case 6:printf("n=6 ");printf("F1");break;
    case 7: printf("n=7 ");printf("F2");break;
    case 8:printf("n=8 ");printf("F1");break;
    case 9:printf("n=9 ");printf("F1");break;
    case 10: printf("n=9 ");printf("F1");break;
    default:
        if(x > 10)
            printf("acima do intervalo");
        else
            printf("menor ou igual a zero!");
    }


    return 0;
}
