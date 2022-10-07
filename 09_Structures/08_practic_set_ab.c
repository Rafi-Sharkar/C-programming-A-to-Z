//Q_5&6
#include<stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}clx;

void display(clx c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.imaginary);

}

int main(){
    clx cnum[5];
    for(int i=0;i<5;i++){
        printf("Enter the real value for %d num ::\n",i+1);
        scanf("%d",&cnum[i].real);
        printf("Enter the imaginary value for %d num ::\n",i+1);
        scanf("%d",&cnum[i].imaginary);
    }
    for(int i=0;i<5;i++){
        display(cnum[i]);
    }
    return 0;
}