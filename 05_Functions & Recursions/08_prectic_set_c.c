//Write a function to calculate the force of attraction on a body of mass m exerted by earth.(g= 9.8m/s^2)

#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the value of mass in Kg:");
    scanf("%f",&m);     // don't take \n in scanf. result will be terminated
    printf("The value of force in Newton is %.2f\n",force(m));      // (%.nf) means how many digit you want to see after decimal 
    
    return 0;
}

float force(float mass){
    float result;
    result = mass*9.8;
    return result;
}