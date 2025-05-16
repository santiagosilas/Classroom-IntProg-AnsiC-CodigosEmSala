/**
27. Concatenar duas strings lidas do teclado.
*/
#include<stdio.h>
int main(){
    char a[100], b[100], c[200];
    int tamA, tamB;
    printf("a:");fgets(a, sizeof(a), stdin);
    printf("b:");fgets(b, sizeof(b), stdin);
    for(tamA = 0;a[tamA]!='\n';tamA++) c[tamA] = a[tamA];
    c[tamA] = ' ';
	tamA = tamA + 1;
    for(tamB = 0;b[tamB]!='\n';tamB++) c[tamB+tamA] = b[tamB];
    c[tamB+tamA] = '\0';
    printf("%s.\n", c);

    return 0;
}
