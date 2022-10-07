#include<stdio.h>

int main(){
    int i = 0;
    do {
        printf("The value of i is %d\n", i);
        i++;
    }while(i<10);       // first do then check the condition. There have at least one time print value

    return 0;
}


/*
do while  means  first do then check condition  (executes at least onec.)
while     means  first check condition then do
*/