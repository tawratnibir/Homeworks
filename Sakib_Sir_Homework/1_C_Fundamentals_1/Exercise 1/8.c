#include<stdio.h>

double convert(double x);

int main(void)
{
    double dollar, pound;

    printf("Enter the amount of dollar: ");
    scanf("%lf", &dollar);

    pound=convert(dollar);

    printf("The equivalent pound is: %.2f", pound);
    return 0;
}

double convert(double x) {
    return x/2;
}