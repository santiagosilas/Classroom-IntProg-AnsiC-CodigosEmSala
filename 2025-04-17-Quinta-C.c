/*
Faixa 1: 1 <= n <= 5
Faixa 2: 7 >= n > 5
Faixa 3: n > 7 e n <= 10
*/
#include<stdio.h>
int main(){
    int ddd = 85;
    int cep = 60842100;

    if(ddd > 0){
        switch(ddd){
            case 85:
                printf("Fortaleza");
                if(cep == 60842100)
                    printf("Messejana");
                else
                    printf("teste . . .");
            default: printf("Outro local");
        }
    }
    else printf("invalido");
    return 0;
}
