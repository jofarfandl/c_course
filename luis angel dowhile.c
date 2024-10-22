#include <stdio.h>
#include <stdlib.h>

int main(){
    int prom=0, error=0, count=0, cal;
    char resp;
    do{
        do{
            printf("ingrese una calificacion en una escala de 100: ");
            scanf("%i",&cal);
            if(cal<60 || cal>100){
                printf("el numero esta fuera del rango\n");
                error++;
            }
            else{
                count++;
                prom=prom+cal;
            }
        }while(cal<60 || cal>100);

        do{
            printf("Desea ingresar otra calificacion s/n: ");
            fflush(stdin);//guardar caracter
            scanf("%c",&resp);
            if (resp!='S' && resp!='N' && resp!='s' && resp !='n'){
                printf("respuesta invalida, intentelo de nuevo\n");
            }
        }while(resp!='S' && resp!='N' && resp!='s' && resp !='n');
    }while(resp == 'S' || resp == 's');

    printf("su promedio es: %i\n",prom/count);
    printf("total de fallas: %i",count);
}
