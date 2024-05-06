#include <stdio.h>

int main() {
    int Vn; 
    int i;
    int formula;
int c;

  
    printf("* Formula n(n+1)(2n+1)/6 * \n");
    printf("Ingrese un valor para la variable N \n");
    scanf("%d",&Vn);
    
  if (Vn <= 0 ) {
        printf("ingresó un valor negativo o decimal, error \n ");
       } 
    else {
        for (i = 1; i <= Vn; i++ ) {
     if(i <= Vn){
             formula =  i*((i+1)*(2*i+1));
             printf ("%d , ", formula/6) ;
    }
     else {
        printf (" %d . ", formula/6);
     }  
}
   printf(" \n\n El valor de n%d es %d",  i-1 , formula/6);     
}
printf(" \n El valor de n por el usuario fue = %d \n\n", Vn);
    return 0;
}
