///25. Copie a string orig (lida do teclado)
/// para a string dest.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    char orig[100], dst[100];

    printf("orig:");
    fgets(orig,  sizeof(orig), stdin);
    printf("%s.", orig);

    for(i = 0; orig[i] != '\n'; i++)
        dst[i] = orig[i];
    dst[i] = '\0';

    printf("dest:%s.\n", dst);
    return 0;
}
