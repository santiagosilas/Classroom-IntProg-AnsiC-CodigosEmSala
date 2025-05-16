///26. Verifique se duas strings são iguais.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, achei = 0;
    char s1[100], s2[100];

    printf("s1:");fgets(s1,  sizeof(s1), stdin);
    printf("s2:");fgets(s2,  sizeof(s2), stdin);
    for(i=0;i<100 && (s1[i]!='\n' && s2[i]!='\n');i++){
        if(s1[i] != s2[i]){
            achei = 1;
            break;
        }
    }
    printf("achei? %d\n", achei);
    return 0;
}
