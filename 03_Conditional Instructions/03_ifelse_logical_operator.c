#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;
    vipPass = 1;

    printf("Enter your age \n");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || !(vipPass == 1))        // all logical operator use in one conditional statement
    {
        printf("You can drive.\n");
    }
    else
    {
        printf("You cannot drice.\n");
    }
    return 0;
}


/*
logical operator:

and --> &&
or  --> ||
not --> !

*/