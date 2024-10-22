#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];
    int i,x,num,n=0;

    srand(time(NULL));
    for( i=0 ; i<10 ; i++){
        x=rand()%31;
        a[i]=x;
    }
    printf("Ingrese el numero a buscar: ");
    scanf("%i",&num);
    printf("Arreglo:\n");
    for( i=0 ; i<10 ; i++){
        if(num == a[i]) n=i;
        printf("%d\n",a[i]);
    }
    if(n>0) printf("El numero: %i se encuentra en la posicion: %i\n\n",num,n+1);
    else{
        printf("El numero: %i no se encuentra en el arreglo\n\n",num);
    }
}
