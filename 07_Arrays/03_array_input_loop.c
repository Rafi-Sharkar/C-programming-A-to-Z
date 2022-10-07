#include <stdio.h>

int main()
{
    int  marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for sturent %d \n", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for sturent %d is %d \n", i+1, marks[i]);
    }

    return 0;
}