#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,j,s,num;
    printf("ingrese el numero por el cual desea empezar: ");
    scanf("%i",&num);
    system("cls");
    printf("   ---> Tabla de multiplicar del numero: %i <---\n\n",num);
    for( s=num ; s<=(num+10) ; s++){
        if(s==num){
            printf("  x  ");
        }
        printf("%5i",s);
    }
        printf("\n");
        printf("----+------------------------------------------------------\n");

    for( j=num ; j<=(num+10) ; j++){
        printf("%3i |",j);
        for( x=num ; x <=(num+10) ; x++){
            printf("%5i", j*x);
        }
        printf("\n");
    }
    return 0;
    system ("pause");
}
