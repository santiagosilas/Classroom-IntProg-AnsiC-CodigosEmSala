#include<stdio.h>
int main(){
    char grupo, // V ou I
        animal,
        tipo;
    scanf("%c %c %c", &grupo, &animal, &tipo);
    if(grupo == "V"){
        if(animal == "A") {
            // ave
            if(tipo == "C") printf("Aguia");
            else if(tipo == "O") printf("pomba");
        }
        else if(animal == "M"){
            // mamifero
            if(tipo == "O") printf("Homem");
            else if(tipo == "H") printf("Vaca");
        }
    }
    else if(grupo == "I"){
        // TO DO
    }
    return 0;
}
