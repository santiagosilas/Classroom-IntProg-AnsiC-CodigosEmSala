///24. Calcule quantos caracteres
/// uma string lida possui.
#include<stdio.h>
#include<stdlib.h>
int main(){
    char n[100];
    printf("s:");
    fgets(n,  sizeof(n), stdin);
    int i = 0;
    while(n[i] != '\n')
        i++;
    printf("caracteres: %d.\n", i);
    return 0;
}
