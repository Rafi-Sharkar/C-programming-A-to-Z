// write a program to print the multiplication table of a given number n.
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number limite of multiplication.:");
    scanf("%d\n", &n);
    for(i = 1; i <= n; i++)
    {
        printf("****Multiplication table of %d ****\n",i);
        for (j = 1; j <= 10; j++)
        {
           printf("%dX%d=%d\n", i, j, i*j);
        }
    }
    return 0;
}