#include<stdio.h>

float o_to_c(float o);

int main(void)
{
    float ounses, cups;

    printf("Enter the amount in ounces: ");
    scanf("%f", &ounses);

    cups=o_to_c(ounses);

    printf("The equivalent cups is: %f", cups);
}

float o_to_c(float o) {
    return o/8;
}