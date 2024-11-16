#include<stdio.h>

int main() {
    int num;

    printf("Enter your integer: ");
    scanf("%d", &num);
    if(num % 2 == 0) printf("Your integer is an even number.");
    if(num % 2 != 0) printf("Your integer is an odd number.");
    return 0;
}