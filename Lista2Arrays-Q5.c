/**
5. Digamos que queremos usar o vetor v para inserir, remover,
buscar  e listar elementos. Em um novo arquivo *.c declare a
variável size, que armazena a nº de elementos atual no vetor.
Em seguida, Implemente as seguintes funções:
a. int inserir, que insere x  na última posição não usada do vetor,
ou seja, na posição size - 1. A função retorna o nº de elementos em
v, que será size + 1.
b. void listar(int v[ ], int n), que exibe o conteúdo de v.
c. int inserir_ini, que insere x na posição 0 (início) de v.
d. int inserir_pos, que insere x na posição pos de v de tamanho n.
e. int remover(int pos,int  v[ ], int n), que remove um valor da posição
de v com tamanho n e retorna o novo tamanho de v. obs: será preciso deslocar os elementos à direita do elemento removido.
f. int buscar(int x, int v[ ], int size), que retorna a posição do item
buscado, -1 caso contrário.
Crie, em main( ), um menu com do..while e switch para utilizar as funções
implementadas. Teste-as! */

#include<stdio.h>
#define MAX 100
int inserir(int v[], int n, int x);
void listar(int v[ ], int n);
int inserir_ini(int v[], int n, int x);
int remover(int pos,int  v[ ], int n);
int buscar(int x, int v[ ], int size);
int main(){
    int valores[MAX], size = 0;
    size = inserir(valores, size, 10);
    size = inserir(valores, size, 20);
    size = inserir(valores, size, 30); // 2
    size = inserir(valores, size, 40);
    size = inserir(valores, size, 50);
    size = remover(2, valores, size);
    listar(valores, size);
    return 0;
}
void listar(int v[ ], int n){
    for(int i = 0;i<n;i++)
        printf("%d ", v[i]);
    printf("\n");
}
int remover(int pos,int  v[ ], int n){
    for(int i = pos+1;i<n;i++)
        v[i-1] = v[i];
    return n-1;
}
int inserir(int v[], int n, int x){
    if(n < MAX){
        v[n] = x;
        n++;
    }
    else
        printf("No space!\n");
    return n;
}
