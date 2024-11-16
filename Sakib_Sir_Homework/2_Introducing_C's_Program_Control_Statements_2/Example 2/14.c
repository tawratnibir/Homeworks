#include<stdio.h>

int main() {
    int i, j;

    printf("Enter your first number: ");
    scanf("%d", &i);
    printf("Enter your second number: ");
    scanf("%d", &j);

    /*relational operators*/
    printf("i < j %d\n", i < j);
    printf("i <= j %d\n", i <= j);
    printf("i > j %d\n", i > j);
    printf("i >= j %d\n", i >= j);
    printf("i == j %d\n", i == j);

    /*logical operators*/
    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}