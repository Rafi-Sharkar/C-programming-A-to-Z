#include<stdio.h>

int main(){
    int a ,b ,c ,d ,e ;
    printf("Enter the 5 number that you want to compare:\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%d\n",&d);
    scanf("%d\n",&e);

    // printf("%d a,%d b,%d c,%d d,%d e", a, b, c, d, e);

    if( a>b && a>c && a>d && a>e ){printf("%d is largest", a);}
    else if ( b>c && b>d && b>e ){printf("%d is largest", b);}
    else if (c>d && c>e){printf("%d is largest", c);}
    else if (d>e){printf("%d is largest", d);}
    else{printf("%d is largest", e);}

    return 0;
}

/*
--> why there take 6 input i take only 5 input.
*/