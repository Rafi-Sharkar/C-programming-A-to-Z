#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];        // otherhand we can use     --char *name;--
};      // must remenber the simicolon



int main(){
    int a=4;
    char b='g';
    float d = 243.8583;

    
    struct employee e1;     //you must write struct employee e1;    not only employee e1;
    {
        e1.salary = 99.95;      // dot(.) is a member operator
        e1.code = 2131130;      // means    makes employee e1's code as  2131130
        // e1.name = "Rafi Sharkar";      // won't work     string is an array and e1.name is variable 
        strcpy(e1.name,"Rafi Sharkar");     // so total Rafi Sharkar copy and pasts at e1.name
    };      //??? why with or without curly brace work

    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%.2f",e1.salary);


    // employee e1;
    // e1.salary = 34;      // won't work without employee structure

    return 0;
}

