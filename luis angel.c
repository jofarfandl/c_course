#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[10];
    int i,x,j,n;
    srand(time(NULL));
    for( i=0; i<=10; i++){
        x=rand()%101;
        a[i]=x;
    }
    printf("Practica 13: Arreglo ordenado\n");
    printf("los valores aleatorios del arreglo son: ");
    for( i=0; i<10; i++){
        printf(" %d ",a[i]);
    }
    printf("\n\n");

    for (j=0; j <=10 ; ++j){
        for (i=j +1; i<=10; ++i){
            if (a[i] < a[j] ){
                    n=a[j];
                    a[j] = a[i];
                    a[i] = n;
                }
            }
        }
    printf("Lista de numeros ordenada: \n\n");
        for(i=0; i<10; ++i){
            printf(" %d ",a[i]);
        }
    printf("\n");
    system("pause");
}
