// quick quizz

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    char name[10];
    float salary;
};

int main(){
    struct employee e1,e2,e3;
    printf("Enter the value of e1 :: ");
    scanf("%d", &e1.code);       //??? why don't we use & or address of e1.code
    printf("value of e1 is :: %d\n",e1.code);
    printf("Enter the salary of e1 :: ");
    scanf("%f", &e1.salary);
    printf("Salary of e1 is :: %.2f\n",e1.salary);
    printf("Enter the name of e1 :: ");
    // scanf("%s", &e1.name);       // there the last value dosen't exicute for %s property
    fflush(stdin);      // for remove previous enter of \n
    gets(e1.name);
    // printf("Name of e1 is :: %s\n",e1.name);     // so we are use gets and puts
    printf("Name of e1 is :: ");
    puts(e1.name);

    printf("\n\n");

    printf("Enter the value of e1 :: ");
    scanf("%d", &e1.code);       //??? why don't we use & or address of e1.code
    printf("value of e1 is :: %d\n",e1.code);
    printf("Enter the salary of e1 :: ");
    scanf("%f", &e1.salary);
    printf("Salary of e1 is :: %.2f\n",e1.salary);
    printf("Enter the name of e1 :: ");
    // scanf("%s", &e1.name);       // there the last value dosen't exicute for %s property
    fflush(stdin);      // for remove previous enter of \n
    gets(e1.name);
    // printf("Name of e1 is :: %s\n",e1.name);     // so we are use gets and puts
    printf("Name of e1 is :: ");
    puts(e1.name);

    printf("\n\n");

    printf("Enter the value of e1 :: ");
    scanf("%d", &e1.code);       //??? why don't we use & or address of e1.code
    printf("value of e1 is :: %d\n",e1.code);
    printf("Enter the salary of e1 :: ");
    scanf("%f", &e1.salary);
    printf("Salary of e1 is :: %.2f\n",e1.salary);
    printf("Enter the name of e1 :: ");
    // scanf("%s", &e1.name);       // there the last value dosen't exicute for %s property
    fflush(stdin);      // for remove previous enter of \n
    gets(e1.name);
    // printf("Name of e1 is :: %s\n",e1.name);     // so we are use gets and puts
    printf("Name of e1 is :: ");
    puts(e1.name);
    
    return 0;
}

/*
(a). Structures keep the data organized
(b). Structures make data mangagement easy fo rthe programer
*/

