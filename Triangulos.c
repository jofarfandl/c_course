#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("ingrese la medida del primer numero: ");
    scanf("%i",&a);
    printf("ingrese la medida del segundo numero: ");
    scanf("%i",&b);
    printf("ingrese la medida del tercer numero: ");
    scanf("%i",&c);
    if(a == b){
        if(a == c){
            if(b == c){
                printf("el triangulo es EQUILATERO\n");
            }
            else{
                printf("el triangulo es ISOSCELES\n");
            }
        }
        else{
            if(b == c){
                printf("el triangulo es ISOSCELES\n");
            }
            else{
                printf("el triangulo es ISOSCELES\n");
            }
        }
    }
    else{
        if(a == c){
            if(b == c){
                printf("el triangulo es ISOSCELES\n");
            }
            else{
                printf("el triangulo es ISOSCELES\n");
            }
        }
        else{
            if(b == c){
                printf("el triangulo es ISOSCELES\n");
            }
            else{
                printf("el triangulo es ESCALENO\n");
            }
        }
    }
    system("pause");
    return 0;
}
