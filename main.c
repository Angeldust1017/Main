/* Programa: Números pares usando FOR*/
#include<stdio.h>

int main()
{
int n, Suma;
    printf("*Suma de números pares* \n\n");
    printf ("Ingresé un valor para 'n' \n" );
    scanf("%d", &n);
    
    printf("Valor ingresado para 'n': %d \n\n", n);
    
    for(int m = 1; m < n+1; m++){
    
    Suma = (m + m);
    printf ( "La suma de n%d es = %d \n", m, Suma);
    }
}
