/// a[i]!='\0' se scanf , e a[i]!='\n' se fgets
#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[100], b[100], c[100];
    int i, tamA, qtdeEspacos = 1;
    printf("a:");fgets(a, sizeof(a), stdin);
    printf("b:");fgets(b, sizeof(b), stdin);
    for(i=0;a[i]!='\n';i++) c[i] = a[i];
    tamA = i;
    for(i=0;b[i]!='\n';i++)
        c[i + tamA] = b[i];
    c[i + tamA] = '\0';
    printf("c:%s.\n", c);
    return 0;
}
