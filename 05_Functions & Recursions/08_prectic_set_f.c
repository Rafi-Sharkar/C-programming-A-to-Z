// make pattern of triangle

#include <stdio.h>
void pp_rec(int n);
void pp_iter(int n);        // confiused

int main()
{
    int n ;
    printf("Enter the length of triangle :");
    scanf("%d",&n);
    printf("recursion\n");
    pp_rec(n);
    printf("Iteratetion\n");
    pp_iter(n);

    return 0;
}
/*
for n = 3
*       --> line: 1 , star: 1
***     --> line: 2 , star: 3
*****   --> line: 3 , star: 5

1. odd number of star in each line
*/
void pp_rec(int n)
{
    if (n == 1)
    {
        printf("*");
        printf("\n");
        return;
    }
    pp_rec(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}

void pp_iter( int n){           // confused
    for(int i=0; i<(2*n-1);i++){
    printf("*");if(i == i++){ printf("\n");}
    }
}