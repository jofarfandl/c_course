#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x, num, np=0;
    char res, c;
    int mejor=100, peor=0;
    do{
        int count=0;
        srand(time(NULL));
        x=rand()%100+1;
        printf("%i",x);
        printf("Encuentre el numero\n");
        do{
            printf("Ingrese el numero a adivinar: ");
            scanf("%i",&num);
            if(num > x){
                    printf("El numero es menor\n");
                    count++;
            }
            if(num < x) {
                    printf("El numero es mayor\n");
                    count++;
            }
        }while( num != x);
        printf("Felicidades, Encontraste el numero: %i\n\n",x);
        if(count > peor) peor=count;
        if(count < mejor) mejor = count;
        do{

            printf("desea volver a jugar s/n?: ");
            fflush(stdin);
            scanf("%c",&res);
            if(res != 's' && res != 'S' && res != 'n' && res != 'N') printf("respuesta invalida, intentelo de nuevo\n");
        }while(res != 's' && res != 'S' && res != 'n' && res != 'N');
        np++;
    }while( res == 's' || res == 'S');
    printf("Numero de partidas jugadas: %i\n",np);
    printf("Mejor puntuacion: %i errores\n",mejor);
    printf("Peor puntuacion: %i errores\n",peor);



    system("pause");
}
