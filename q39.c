/** 39. (Vetores) Criar um programa que leia do teclado o
código dos produtos pedidos e as quantidades desejadas;
Em seguida, calcule e mostre o valor a ser pago por produto
(preço * quantidade) e o total do pedido.
Observação: Considere que o cliente deve informar quando o
pedido deve ser encerrado (imagine um critério de parada).
Segue a tabela de produtos:
Produto	Código	Valor (R$)
Monitor LCD	1	750.35
Notebook HP	2	1200.45
Mouse	3	15.25
Impressora HP	4	450.00
*/
#include<stdio.h>
int main(){
    int codigo, qtde, v1=0, v2=0, v3=0, v4=0, vtotal;
    do {
        scanf("%d %d", &codigo, &qtde);
        switch(codigo){
            case 1: v1 += 750.35 * qtde; break;
            case 2: v2 += 1200.45 * qtde; break;
            case 3: v3 += 15.25 * qtde; break;
            case 4: v4 += 450.0 * qtde; break;
        }

    } while(codigo != -1);
    vtotal = v1+v2+v3+v4;
    printf("valor total: %d\n", vtotal);

    return 0;
}








