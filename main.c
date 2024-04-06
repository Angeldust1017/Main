/* Programa: Calcular la devaluación de un automovil por año, teniendo en cuenta la recuperación de 2000 dólares*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int p_car, dev_car, rec_car, ad_car; p_car = 20000, rec_car = 2000;
    setlocale(LC_ALL,"spanish");


    printf( "\n  El precio del carro es:\n %d dolares", p_car);
    printf( "\n Ingrese los annos de devaluacion del carro:");
    scanf("%d",&dev_car);
    printf("\n El monto de recuperacion del carro es de: %d dolares \n",rec_car);
ad_car= (p_car-rec_car); ad_car = (ad_car/dev_car);
    printf("\n El carro se va devaluando: \n %d dolares por anno",ad_car);
    getch(); /* Pausa */

    return 0;
}
