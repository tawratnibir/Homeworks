#include<stdio.h>

int get_sqr(void);

int main(void)
{
    int sqr;

    sqr = get_sqr();

    printf("%d", sqr);

    return 0;
}

int get_sqr(void) {
    int n, square;
    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;

    return square;
}