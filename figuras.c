#include <stdio.h>
#include <stdlib.h>

int main(){
    int fil, col , n, t=5;
//---------------------------------------------------------------------------
    for( fil=1; fil<=t; fil++){
        for( col=1; col<=t; col++){
            printf("* ");

        }
        printf("\n");
    }
    printf("\n");
//---------------------------------------------------------------------------
    for( fil=1; fil<=t; fil++){
        for( col=1; col<=t; col++){
            printf("%c ",col>=fil ? '*' : ' ');
        }
        printf("\n");
    }
    printf("\n");
//---------------------------------------------------------------------------
    for( fil=1; fil<=t; fil++){
        for( col=1; col<=t; col++){
            printf("%c ",col==fil ? '*' : ' ');
        }
        printf("\n");
    }
    printf("\n");
//----------------------------------------------------------------------------
    for( fil=1; fil<=t; fil++){
        for( col=1; col<=t; col++){
            printf("%c ",col+fil-1==t ? '*' : ' ');
        }
        printf("\n");
    }
    printf("\n");
//----------------------------------------------------------------------------
    for( fil=1; fil<=t; fil++){
        for( col=1; col<=t; col++){
            printf("%c ",fil==1||fil==t ? '*' : ' ');
        }
        printf("\n");
    }
    printf("\n");
//-------------------------------------------------------------------------



    return 0;
    system("pause");
}
