#include<stdio.h>
int main(){
    char grupo, // V ou I
        animal,
        tipo;
    scanf("%c %c %c", &grupo, &animal, &tipo);
    switch(grupo){
        case 'V':
            switch(animal){
                case 'A':
                    switch(tipo){
                        case 'C': printf("Aguia");
                        case 'O': printf("Pomba");
                    }
                    break;
                case 'M':
                    switch(tipo){
                        case 'O': printf("Homem");
                        case 'H': printf("Vaca");
                    }
                    break;
            }
            break;
        case 'I':
            switch(animal){
                case 'I':
                    switch(tipo){
                        case 'M': printf("PULGA");
                        case 'R': printf("LAGARTA");
                    }
                    break;
                case 'A':
                    switch(tipo){
                        case 'O': printf("Homem");
                        case 'H': printf("Vaca");
                    }
                    break;
            }
            break;
    }
    return 0;
}
