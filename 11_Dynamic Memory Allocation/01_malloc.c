#include<stdio.h>
#include<stdlib.h>

int main(){
    //  printf("The size of int on my system is ::%d\n",sizeof(int));
    // printf("The size of float on my system is ::%d\n",sizeof(float));
    // printf("The size of char on my system is ::%d\n",sizeof(char));

    int *ptr;
    /* int is 4 bytes and malloc take 6 int total (6*4)byte.
       sizeof() fucntion give me the size of this data type

    malloc return the void pointer !!!
    */

    ptr = (int*) malloc(6 *   sizeof(4));   
/*          |           |         |
           \ /         \ /       \ /
        (costiong     (size     (return size
        void          for 30     of 1 int)
        ponter          int)
        to int)
*/      
    


    return 0;
}