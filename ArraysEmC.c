#include<stdio.h>
int main(){
    int v1[5];
    v1[0] = 10;
    v1[1] = 20;
    v1[2] = 30;
    v1[3] = 40;
    v1[4] = 50;
    int v2[5] = {10,20,30,40,50};
    int v3[] = {10,20,30,40,50};
    int v[5];

    for(int i=0;i<5;i++)
        v[i] = (i+1) * 10;
    //for(int i=0;i<5;i++){
    //    printf("x:"); scanf("%d", &v[i]);
    //}
    int n = 10;
    scanf("%d", &n);
    int a[n];

    return 0;
}
