#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee *emp){        // if i only write emp then value will copy in this emp, there no change will happened
    printf("The code of employee is : %d \n", (*emp).code);
    printf("The code of employee is : %.2f \n", (*emp).salary);
    printf("The code of employee is : %s \n", (*emp).name);
    (*emp).code = 34;

}

int main(){
    struct employee e1, *ptr;

    ptr = &e1;
    ptr ->code = 2131130;
    ptr ->salary = 45.56;
    strcpy(ptr ->name, "Rafi Sharkar");

    show(&e1);     // this function is just for print

    printf("The code employee is : %d \n",e1.code);

    return 0;
}