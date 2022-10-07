// what will the following line produce in a C  program: printf("%d %d %d \n",a, ++a, a++);

#include<stdio.h>

int main(){
    int a=3;
    printf("%d %d %d \n ",a, ++a, a++);     // compiler execute in printf's argument right to left,but position will same
    // right to left ::: 3rd, print(5) ;2nd, increament_5->print(5) ;1st, print(3)->increament_4

    return 0;
}