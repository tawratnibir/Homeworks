#include<stdio.h>

void outnum(int c);

int main(void)
{
    int p;
    
    printf("Enter an integer: ");
    scanf("%d", &p);
    outnum(p);

    return 0;
}

void outnum(int c) {
    printf("%d",c);
}