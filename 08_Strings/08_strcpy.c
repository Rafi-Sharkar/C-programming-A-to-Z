// copy in other char variable.     // strcpy()     for     copy    
#include<stdio.h>
#include<string.h>

int main(){
    char *source = "Rafi Sharkar";     
    char target[45];

    strcpy(target,source);      // by this function it copy one string to another
                                // there strcpy(to, from); copy from source to target, target should have space for store copied value

    printf("Now the target is :: %s\n",target);
    printf("Now the source is :: %s",source);
    return 0;
}