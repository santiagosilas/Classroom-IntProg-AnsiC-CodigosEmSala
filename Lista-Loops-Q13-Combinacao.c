#include<stdio.h>
int main(){
    int n, k, comb, nfat, kfat, nkfat;
    int tmp;
    scanf("%d %d",&n, &k);
    tmp = n;
    for(nfat=1; tmp > 1;tmp--) nfat *= tmp;

    tmp = k;
    for(kfat=1; tmp > 1;tmp--) kfat *= tmp;

    tmp = n - k;
    for(nkfat=1; tmp > 1;tmp--) nkfat *= tmp;

    printf("comb = %d\n", nfat/(kfat*nkfat) );

    return 0;
}
