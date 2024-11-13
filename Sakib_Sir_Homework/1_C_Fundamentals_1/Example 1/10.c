#include<stdio.h>

int main(void)
{
    float e_days; 
    float j_years;

    
    printf("Enter the number of Earth days: ");
    scanf("%f", &e_days);

    j_years = e_days / (365.0 * 12.0);

    printf("Equivalent Jovian years: %f", j_years);

    return 0;
}
