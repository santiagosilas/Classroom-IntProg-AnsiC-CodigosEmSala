#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0;i<n;i++)
        a[i] = (i+1)*10;

    for(int i = 0;i<n;i++)
        printf("%d,", a[i]);

    return 0;
}
