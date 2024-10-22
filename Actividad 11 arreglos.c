#include<stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int i, j;
    printf("Arreglo\n");
    for(i=0 ; i<10 ; i++){
        printf("Ingrese el valor %i del arreglo:",i+1);
        scanf("%i",&a[i]);
    }
    for(j=9 ; j>=0 ; j--){
        printf("%i, ",a[j]);
    }
}

