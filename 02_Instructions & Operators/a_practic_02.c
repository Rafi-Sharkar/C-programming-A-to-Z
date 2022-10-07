#include <stdio.h>

int main()
{
    float d = 0.33;

    // Q3. Write a program to determine whether a number is divisible by 97 or not
    int num;
    printf(" Enter the number:\n");
    scanf("%d", &num);
    printf("Divisibility test returns:%d\n ", num % 97);

    // Q4. step by step evaluation of 3*x / y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 0
    printf("The value of result %d", result);
    

        return 0;
}