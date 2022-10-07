#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive");
    }
    else
    {
        printf("You can drice.");
    }

    if (age = 50){                  // in C language value > 0 is True, and only 0 is False. there age value assign 50 which is greater than 0 fo
        printf("Half Century\n");
    }
    return 0;
}

/*
Relational operators:
== , equals check
>= , greater than or equal to
!= , not equal to
= , assign to
*/