#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sps(char you, char comp)
{
    // returns:: 1 if you win, -1 if you lose, 0 if draw
    if (you == comp)
    {
        return 0;
    }
    if ((you == 's' && comp == 'c') || (you == 'p' && comp == 's') || (you == 'c' && comp == 'p'))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main(){

    char you, comp;
    srand(time(0));
    int number = rant()%100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }

    comp = 's';
    printf("Enter --> 's' for stone, 'p' for paper, 'c' for scissors\n");
    scanf("%c", &you);
    int result;
    result = sps(you, comp);

    return 0;
}
