#include<stdio.h>
int main(){
    int A[] = {10,20,40,50,30};
    int B[] = {10,20,20,30,40,50,50,60,70,80};
    int C[5];
    int k = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 10; j++){
            if(A[i] == B[j]){

                int existe = 0;
                for(int m=0;m<k;m++){
                    if(C[m] == A[i]){
                        existe = 1;
                        break;
                    }
                }

                if(existe == 0){
                    C[k] = A[i];
                    k++;
                }
            }
        }
    }
    for(int m=0;m<k;m++)
        printf("%d,", C[m]);

    return 0;
}
