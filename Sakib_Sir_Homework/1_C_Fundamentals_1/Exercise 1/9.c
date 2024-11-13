#include<stdio.h>

void outchar(char c);

int main(void)
{
    outchar('A');
    outchar('B');
    outchar('C');

    return 0;
}

void outchar(char c) {
    printf("%c ",c);
}