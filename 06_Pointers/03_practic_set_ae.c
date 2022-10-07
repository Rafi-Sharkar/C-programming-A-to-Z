#include<stdio.h>

int main(){
    int i = 39;
    int *j, **k, ***o;
    j = &i;
    k = &j;
    o = &k;

    printf("the value of i is %d \n", ***o);
    return 0;
}