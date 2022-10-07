#include<stdio.h>

int main(){
    int math, physics, chemistry, total;
    printf("Enter Math marks:\n");
    scanf("%d",&math);
    printf("Enter physics marks:\n");
    scanf("%d",&physics);
    printf("Enter chemistry marks:\n");
    scanf("%d",&chemistry);

    total = (physics+math+chemistry)/3;
    if((total < 40) || physics<33 || math<33 || chemistry<33){
        printf("Your are fail.\n", total);
    }
    else{
        printf("Your are pass.\n");
    }
    return 0;
}