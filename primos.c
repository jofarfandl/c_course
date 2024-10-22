#include <stdio.h>
#include <stdlib.h>

int n,r,v;
int b=0;
int count = 1;

int main()
{
    printf("ingrese el numero que desea saber si es primo o no: ");
    scanf("%i",&n);
    r = n/2;
    while((count < r) && (b == 0))
    {
        count= count+1;
        v = n%count;
        if( v == 0)
        {
            b = 1;
        }
    }
    if (b == 1)
    {
        printf("El numero:%i No es primo",n);
    }
    else
    {
        printf("El numero:%i ES primo",n);
    }
    return 0;
    system("pause");

}
