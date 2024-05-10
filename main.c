/* Programa: Detecta que signo zodiacal es el usuario*/
#include <stdio.h>

int main() {
    int dia; int mes;
    printf("*** Signo Zodiacal ***\n");
    printf("Ingrese su fecha de nacimiento solo dia y mes \n");
    printf("Ingrese el dia en formato de numero \n");
    scanf("%d", &dia);
    printf("Ingrese el mes en formato de numero \n");
    scanf("%d", &mes);

    if( dia == 0 || mes <= 0 || dia > 31 || mes > 12) {
        printf("ingreso un dato incorrecto en día y/o mes");
    }
    else {
             if( mes == 1 && dia >= 20 || mes == 2 && dia <= 18){
                 printf("Eres Acuario ");

             }
             if( mes == 2 && dia >= 19 || mes == 3 && dia <= 20){
             printf("Eres Piscis ");
             }

             if( mes == 3 && dia >= 21 || mes == 4 && dia <= 19){
              printf("Eres Aries ");
              }

              if( mes == 4 && dia >= 20 || mes == 5 && dia <= 20){
              printf("Eres Tauro ");
               }

              if( mes == 5 && dia >= 21 || mes == 6 && dia <= 20){
               printf("Eres Geminis ");
                }

        if( mes == 6 && dia >= 21 || mes == 7 && dia <= 22){
            printf("Eres Cancer ");
        }

        if( mes == 7 && dia >= 23 || mes == 8 && dia <= 22){
            printf("Eres Leo ");
        }

        if( mes == 8 && dia >= 23 || mes == 9 && dia <= 22){
            printf("Eres Virgo ");
        }

        if( mes == 9 && dia >= 23 || mes == 10 && dia <= 22){
            printf("Eres Libra ");
        }

        if( mes == 10 && dia >= 23 || mes == 11 && dia <= 21){
            printf("Eres Escorpio ");
        }

        if( mes == 11 && dia >= 22 || mes == 12 && dia <= 21){
            printf("Eres Sagitario ");
        }

        if( mes == 12 && dia >= 22 || mes == 1 && dia <= 18){
            printf("Eres Capricornio ");
        }

    }
    return 0;
}
