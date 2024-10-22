#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,d,ord,aux=0;
    printf("Ordenar 4 numeros de manera ascendente o descendente");
    printf("\n1=ascendente\n2=descendente\ningrese la opcion: ");
    scanf("%i",&ord);
    system("cls");
    printf("\nIngrese el primer numero: ");
    scanf("%i",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&aux);
    if( a>aux) b=aux;
    else{
        b=a;
        a=aux;
    }
    printf("ingrese el tercer numero: ");
    scanf("%i",&aux);
    if( b>aux )c=aux;
    else{
        if(a<aux){
            c=b;
            b=a;
            a=aux;
        }
        else{
            c=b;
            b=aux;
        }
    }
    printf("Ingrese el cuarto numero: ");
    scanf("%i",&aux);
    if(c>aux) d=aux;
    else{
        if(b>aux){
            d=c;
            c=aux;
        }
        else{
            if(a>aux){
                d=c;
                c=b;
                b=aux;
            }
            else{
                d=c;
                c=b;
                b=a;
                a=aux;
            }
        }
    }

    if(ord==1) printf("Orden Ascendente:\n%i\n%i\n%i\n%i",d,c,b,a);
    else printf("Orden descendente:\n%i\n%i\n%i\n%i",a,b,c,d);


    return 0;
    system("pause");

}
