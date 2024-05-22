/* Programa: Menú de 4 opciones de comida rapido usando SWITCH*/
#include <stdio.h>

int main() {

    int pack_n;
    printf("Menu de 4 paquetes de comida\n");
    printf("Ingrese un número para el paquetes desea ordenar\n\n");
    printf("Paquete 1: Hamburguesa con papas\n");
    printf("Paquete 2: Costillas BBQ con papas\n");
    printf("Paquete 3: Orden de 3 Hot-dogs\n");
    printf("Paquete 5: 1 Pizza de pepperoni mediana con un refresco de Litro y medio\n");
    
    scanf("%d", &pack_n);

    switch (pack_n) {
        case 1 : 
            printf("\n Eligio el paquete 1");
            break;
        case 2 : 
            printf("\n Eligio el paquete 2");
             break;
        case 3 : 
            printf("\n Eligio el paquete 3");
             break;
        case 4 : 
            printf("\n Eligio el paquete 4"); 
             break; 
        default : 
            printf("\n Eligio una opcion erronea");
             break;
    }
    return 0;
}
