//Q_1
#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
}vt;

vt sumvector(vt v1, vt v2){
    vt result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    vt v1, v2, sum;
    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);

    v2.x = 43;
    v2.y = 75;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);

    sum = sumvector(v1,v2);
    printf("X dim result is %d and Y dim result is %d\n",sum.x,sum.y);
    
    
    return 0;
}