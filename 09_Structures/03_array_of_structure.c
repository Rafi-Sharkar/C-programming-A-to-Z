#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary ;
    char name[10];

};


int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[51].salary = 34.234;
    strcpy(facebook[73].name,"Rafi Sharkar");

    facebook[0].code = 100;
    facebook[51].salary = 34.234;
    strcpy(facebook[73].name,"Rafi Sharkar");

    facebook[0].code = 100;
    facebook[51].salary = 34.234;
    strcpy(facebook[73].name,"Rafi Sharkar");
    printf("Done");

    return 0;
}