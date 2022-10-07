#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary ;
    char name[20];

};


int main(){
    struct employee rafi = {100, 34.6234, "Rafi Sharkar"};      // initialize with order of property
    // struct employee alif = {0}   // then all value of alif will be 0
    
    
    printf("code is : %d\n ", rafi.code);
    printf("Salary is : %.2f\n ", rafi.salary);
    printf("Name is: %s\n ", rafi.name);


    return 0;
}

/*
Structure in memory:
Sturcture are stored in contiguous memory locations. For the sturcture e1 of type struct employee,
memory layout looks like this
{  100,   71.22,    "Rafi"}
    |       |         |
   \ /     \ /       \ /
 (78810) (78814)   (78818)

*/


