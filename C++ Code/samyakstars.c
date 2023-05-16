#include <stdio.h>

int main()
{
    int n, i, a, p;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (p = i; p <= n - i+(n-1); p++)
        { 
            printf(" ");
        }
        for (a = 1; a <= 2 * i - 1; a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}