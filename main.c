/* Programa: Ordena 3 números de mayor a menor que sean mayores de 3 y menores de 15*/

#include <stdio.h>

    void bubbleSort(int nn[], int n) {
        int i, j, temp;
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if (nn[j] < nn[j+1]) {
                    // intercambiar nn[j] y nn[j+1]
                    temp = nn[j];
                    nn[j] = nn[j+1];
                    nn[j+1] = temp;
                }
            }
        }
    }

    int main() {
        int nn[3];
        int n = sizeof(nn)/sizeof(nn[0]);
        printf("*** Ordenamiento de números ***\n");
        printf("ingrese 3 números \n que sean mayores de 3 y menores de 15 \n\n");
        printf("Ingrese el primer numero \n");
        scanf("%d", &nn[0]);
        printf("Ingrese el segundo numero \n");
        scanf("%d", &nn[1]);
        printf("Ingrese el tercer numero \n");
        scanf("%d", &nn[2]);

           for (int k = 0; k < 3; ++k) {
             nn[k];
             printf(" Ingreso datos en el numero %d de: %d \n", k+1, nn[k]);
           if( nn[k] <= 3 || nn[k] >= 15){
              printf("ingreso datos incorrectos \n\n");

             }
           }
        bubbleSort(nn, n);
        printf("Arreglo ordenado: \n");
        for (int i=0; i < n; i++) {
            printf("%d ", nn[i]);
        }
        return 0;
    }
