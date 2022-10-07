#include<stdio.h>

int sum(int x , int y);
int main(){
    int a=4, b=7;
    printf("The value of a and b before function call is %d, %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a,b));   // a and b are the argument of function     // assume x=a, y=b;
    printf("The value of a and b after function call is %d, %d\n", a, b);
    return 0;
}

int sum(int x , int y){         // x, y are the parameter of the function       // if we change x, y. there no issue will happend in a and b in main funciton
    int c;
    c = x + y ;
    x = 44;
    y = 77;
    return c;
}


/*
in call by value ,
1, value of a and b copy from  sum function(arguments) which in main function,
        // arguments are copy to parameters
2, and paste the value in sum function(parameters)

    so, if we assign the value of that parameter, then arguments values are not going to change in main function.


In C we usually make a call by value. 
*/