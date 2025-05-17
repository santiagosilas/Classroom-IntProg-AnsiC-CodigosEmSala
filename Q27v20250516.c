#include<stdio.h>
int main(){
    int i,tamA, tamB;
    char a[10], b[10], c[20];
    printf("a:");fgets(a, sizeof(a), stdin);
    printf("b:");fgets(b, sizeof(b), stdin);
    for(i=0;a[i]!='\n' && a[i]!='\0';i++)
        c[i]=a[i];
    tamA = i;
    c[tamA] = ' ';
    //
    for(i=0;b[i]!='\n' && b[i]!='\0';i++)
        c[i+tamA+1] = b[i];
    tamB = i;
    c[tamA+1+tamB+1] = '\0';
    printf("%s.\n", c);

    return 0;
}
