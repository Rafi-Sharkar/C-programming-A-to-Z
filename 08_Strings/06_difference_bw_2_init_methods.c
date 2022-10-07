#include<stdio.h>

int main(){
    char *ptr = "Rafi Sharkar";  // can be re-initialize; // in this case location assign to now value
    // char ptr[] = "Rafi Sharkar";    // can't be re-init     // in this case value will overweite

    ptr = "Harry vhi";    

    printf("%s",ptr);

    return 0;
}