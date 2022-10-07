#include <stdio.h>
#include <string.h>

int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string :\n");
    scanf("%s", st1); // st1 = &st1[0]

    
    Printf("Enter the value of second string character by character:\n");
    while (c != '\n')
    {
        fflush(stdin);      // for avoid this enter we use fflush for remove enter(\n)
        scanf("%c", &c);    // any character is a valid input for scanf. after input a character we tap enter then the next in loop this enter(\n) catch by scanf againg then program will be terminated
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';
    printf("The value of st1 is :%s", st1);
    printf("The value of st2 is :%s", st2);

    // printf("strcmp for these strings returns %d", strcmp(st1, st2));

    return 0;
}

/*
why error, i can't understand
*/

