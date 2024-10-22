#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,j;
    printf("x    1  2  3  4  5  6  7  8  9  10\n");
    printf("----------------------------------\n");
    for( j=1 ; j<=10 ; j++){
        printf("%i |",j);
        for( x=1 ; x <= 10 ; x++){
            printf("%3i", j*x);
        }
        printf("\n");
    }
}
