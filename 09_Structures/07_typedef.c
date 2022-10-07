#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;       // typedef give permition to write --(struct employee)--  as  --emp--

void show(emp emp1){        // if i only write emp then value will copy in this emp, there no change will happened
    printf("The code of employee is : %d \n", emp1.code);
    printf("The code of employee is : %.2f \n", emp1.salary);
    printf("The code of employee is : %s \n", emp1.name);
}


int main(){
    // Declaring e1 and ptr:

    emp e1,*ptr;        // emp is a custom data type.   we can write --struct employee-- as --emp--

    // pointing ptr to e1:
    ptr = &e1;

    // Set the member values for e1
    ptr ->code = 231;
    ptr ->salary = 34.24;
    strcpy(ptr ->name,"Rafi Sharkar");
    // print the value of e1
    // printf("%d\n",e1.code);
    // printf("%.2f\n",e1.salary);
    // printf("%s\n",e1.name);
    // or 
    show(e1);


    return 0;
}

/*
We can use the typedef keyword to create an alics(nick name) name for data types in C.
Typedef is more commonly used with structures
*/


