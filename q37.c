/** 37. Crie um menu de uma calculadora que apresente as opera��es
b�sicas (+,-,*,/), usando o la�o do..while e o teste condicional switch.
Uma destas op��es � o t�rmino da exibi��o do menu.
*/
#include<stdio.h>
int main(){
    char op;
    int x, y;
    do {
        scanf("%d %c %d", &x, &op, &y);
        switch(op){
            case '+':printf("%d %c %d = %d\n", x, op, y, x+y);break;
            case '-':printf("%d %c %d = %d\n", x, op, y, x-y);break;
            case '*':printf("%d %c %d = %d\n", x, op, y, x*y);break;
            case '/':printf("%d %c %d = %f\n", x, op, y, (float)x/y);break;
            default: op='q';
        }
    } while(op!='q');
    return 0;
}








