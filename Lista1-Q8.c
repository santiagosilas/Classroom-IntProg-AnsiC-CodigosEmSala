#include<stdio.h>
int main(){
    int p1 = 2,p2 = 3,p3 = 2,p4 = 1;
    float n1,n2,n3,n4, media;
    printf("notas:");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    media = (n1*p1+n2*p2+n3*p3+n4*p4)/(p1+p2+p3+p4);
    printf("media:%.2f\n", media);
    return 0;
}
