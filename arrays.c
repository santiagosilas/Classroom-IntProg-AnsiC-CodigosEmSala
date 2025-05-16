#include <stdio.h>
#include <stdlib.h>

int main()
{

    int v[10] = [1,2,3,4,5,6,7,8,9,0];
    int i, soma = 0;
    while(i < 10){
        soma = soma + v[i];
        i++;
    }

    return 0;
}
