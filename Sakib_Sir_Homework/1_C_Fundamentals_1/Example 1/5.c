#include<stdio.h>
int main(void)
{
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter an floating point number: ");
    scanf("%f", &f);

    printf("%d ", num);
    printf("%f ", f);
    return 0;
}
