#include <studio.h>

void main(void)
{
    int i , j;
    i=1;
    while(i<=5){
        j=1;
        while(j<=i)
        {
            printf("\t%d" , j);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
}