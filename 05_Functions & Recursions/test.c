#include<stdio.h>
void rec(int y);

int main(){
    int x;
    rec(x);
    return 0;
}

void rec(int y){
    rec(y-1);
}
