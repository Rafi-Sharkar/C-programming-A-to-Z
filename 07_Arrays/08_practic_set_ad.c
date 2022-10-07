#include<stdio.h>

void mt(int *arr, int num, int n){
    printf("The multiplication table of %d is :\n",num);
    for (int i=0;i<n;i++){
        arr[i] = num*(i+1);
    }
    for (int i = 0;i<n;i++){
        printf("%dX%d = %d \n", num,i+1, arr[i]);
    }
    printf("\n***********************\n");
}

int main(){
    int x,y,num,i;
    printf("Enter the dimention of table as row X columns :\n");
    scanf("%d",&x);
    scanf("%d",&y);
    int multable[x][y];    // row:3 and columns:10 --> it's called 3d array

    printf("Enter a number for multiplication: \n");
    scanf("%d", &num);
    printf("Which table do you want to store: \n");
    scanf("%d", &i);

    mt( multable[i-1], num, y);


    // mt( multable[1], 7, y);
    // mt( multable[2], 9, y);

    return 0;
}