// strcat()     for     concatenate
#include<stdio.h>
#include<string.h>

int main(){
    char *source = "Rafi";     
    char target[45]= "hello,";

    // printf("Now the target is:: %s\n",target);
    // strcat(source,target);      // this format is wrong.
    strcat(target, source);      //char *st1= "hello";st2[]="Rafi";     strcat(st2,st1)     ## source should in pointer and target will in array[]

    printf("Now the target is:: %s\n",target);
    return 0;
}