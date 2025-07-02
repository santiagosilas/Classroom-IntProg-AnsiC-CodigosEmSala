#include<stdio.h>
#include<stdlib.h>
void init(int numLinhas, int numCols, int M[numLinhas][numCols]){
    for(int i=0;i<numLinhas;i++)
        for(int j = 0;j<numCols;j++)
            M[i][j] = rand() % 10;
}
void print(int numLinhas, int numCols, int M[numLinhas][numCols]){
    printf("Matriz:\n");
    for(int i=0;i<numLinhas;i++)
    {
        for(int j = 0;j<numCols;j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}
void mult(int rA, int cA,int rB, int cB,int rC, int cC,
          int A[rA][cA],int B[rB][cB],int C[rC][cC]){

    for(int i=0;i<rC;i++)
    {
        for(int j = 0;j<cC;j++)
        {
            C[i][j] = 0 ; // produto escalar
            for(int k = 0;k<cA;k++)
                C[i][j] += A[i][k]*B[k][j];
        }

    }
}
int main(){
    int rowsA, colsA,rowsB, colsB;
    scanf("%d%d%d%d", &rowsA,&colsA, &rowsB, &colsB);
    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];
    init(rowsA, colsA, A);
    init(rowsB, colsB, B);
    print(rowsA, colsA, A);
    print(rowsB, colsB, B);
    if(colsA == rowsB){
        mult(rowsA, colsA,
             rowsB, colsB,
             rowsA, colsB,
             A,B,C);
    }

    /// mult(A, B, C)
    /// print(C)
    return 0;
}
