#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess, ng=1,x,y;
    // printf("Enter the range of guess. \n");
    // printf("Start from");scanf("%d",x);printf(" to ");scanf("%d",y);
    srand(time(0));    number = rand()%100 + 1; // Generates a random number between 1 to 100
    printf("The number is %d\n", number);   //this is the guess number you can  comment it
    // Keep running the loop untile the number is guessed

    do
    {
        printf("Guess the number Between 1-100 : ");
        scanf("%d",&guess);
        if(guess>number){printf("Lower number Please!\n");}
        else if (guess<number){printf("Higher number please\n");}
        else{printf("Your guessed it in %d attempts\n",ng);}ng++;      
    } while (guess != number);
    

    return 0;
}