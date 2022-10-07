// strcmp()     for       compare
#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = "Hello";     
    char str2[20]= "harry";   // ascii value (terget - source) if  positive: 1 elif negative: -1 else: 0

    int val = strcmp(str1,str2);

    printf("Now the var is:: %d",val);
    return 0;
}

/*
strcmp():
This function is used to compare two strings.

it return:0;  if strings are equal

return:negative value;   if first string's mismatching character's ASCII value is not greater than second string's corresponding mismatching character.[first<second]

return:possitive;     if( first > second );
*/



/*
there have more built-in-function for string
 
*/

