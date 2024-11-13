#include<stdio.h>

float weight_moon(float x);

int main() {
    float weight1, weight2;

    printf("Enter your weight on earth: ");
    scanf("%f", &weight1);

    weight2 = weight_moon(weight1);

    printf("Your weight on moon will be: %f", weight2);

    return 0;
}
float weight_moon(float x) {
    return 0.17*x;
}