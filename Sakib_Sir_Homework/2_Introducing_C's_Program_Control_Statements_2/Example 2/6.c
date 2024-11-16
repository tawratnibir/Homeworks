#include<stdio.h>

int main() {
    float num;
    int choice;

    printf("1. Meter to feet, 2. Feet to meter: ");
    printf("Enter choice: ");
    scanf("%d", choice);

    if(choice == 1) {
        printf("Enter meter: ");
        scanf("%f", &num);
        printf("Feet: %f", num * 3.28);
    } 

    else {
        printf("Enter feet: ");
        scanf("%f", &num);
        printf("Meter: %f", num / 3.28);
    }

    return 0;
}