#include<stdio.h>
int main(void)
{
    float num1, num2, sum;

    printf("Enter a floating point number: ");
    scanf("%f", &num1);

    printf("Enter another floating point number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The sum of the numbers are: %f", sum);

    return 0;
}
