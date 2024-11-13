#include<stdio.h>

int main(void)
{
    float edge1, edge2, edge3, volume;

    printf("Enter the length of the first edge: "); 
    scanf("%f", &edge1);

    printf("Enter the length of the second edge: "); 
    scanf("%f", &edge2);

    printf("Enter the length of the third edge: "); 
    scanf("%f", &edge3);

    volume = edge1 * edge2 * edge3;

    printf("The volume of the cube is: %.2f cubic units", volume);
    return 0;
}