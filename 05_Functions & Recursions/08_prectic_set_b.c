// Write a function to convert celcius temperature into fahrenheit
// Write a function to convert fahrenheit temperature into celcius
#include<stdio.h>
float celsius(float F);
float fahrenheit(float C);

int main(){
    float ce, fa;
    printf("Enter the celsius value that you want to convert in fahrenheit:");
    scanf("%f",&ce);
    printf("%f celsius = %f\n",ce,fahrenheit(ce));
    printf("Enter the fahrenheit value that you want to convert celsius:");
    scanf("%f",&fa);
    printf("%f celsius = %f\n",fa,celsius(fa));
    return 0;
}

float fahrenheit(float C){
    float fh;
    fh =(C*9/5)+32 ;
    return fh;
}

float celsius(float F){
    float cs;
    cs =(F-32)*5/9;
    return cs;
}


