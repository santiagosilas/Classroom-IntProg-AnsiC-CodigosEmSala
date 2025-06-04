#include<stdio.h>
int main(){
    int n1, n2 = 0, cont = 0;
    scanf("%d", &n1);

    while(n1!=0){
        n2  = n2 * 10 + n1  % 10;

        n1 /= 10;
        cont++;
    }
    printf("%d %d\n", cont, n2);
    return 0;
}
