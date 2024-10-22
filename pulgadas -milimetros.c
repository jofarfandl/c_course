#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int x,i,y,z,a,b,num,res,res2;
    float otro=1, pul=25.4;
    printf("ingrese la cantidad de fracciones en las que desea dividir una pulgada: ");
    scanf("%i",&x);
    do{
        printf("Usted ingreso el numero: %i\n",x);
        printf("Fraccion    Equivalente         Milesimas       Milimetros \n");
        printf("---------------------------------------------------------------\n");
        for( i=1 ; i<=x ; i++ ){
            for( num=1 ; num<=x/2 ; num++ ){
                y=i;
                z=x;
                res=x%num;
                res2=i%num;
                if(res==0 && res2==0){
                    a=i/num;
                    b=x/num;
                }
            }
            if(i!=x){
                printf("%i/%i           %i/%i               %.4f          %.4f\n",i,x,a,b,(otro/x)*i,  (pul/x)*i);
            }
            else{
                printf("%i/%i           1                 1.0000          25.4000\n",i,x);
            }
        }
        printf("Para salir ingrese 0\nIngrese la cantidad de fracciones en las que desea dividir una pulgada: ");
        scanf("%i",&x);
        system("cls");
    }while(x!=0);
    printf("\n      Fin del programa\n\n");
}

