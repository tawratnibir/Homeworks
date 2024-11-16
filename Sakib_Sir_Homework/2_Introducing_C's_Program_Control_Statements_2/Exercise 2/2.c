#include<stdio.h>

int main() {
    int num1, num2, choice;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("1. Product, 2. Sum : ");
    scanf("%d", &choice);

    if(choice == 1) printf("The product is : %d", num1 * num2);
    else printf("The sum is : %d", num1 + num2);
    return 0;
}