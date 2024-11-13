#include<stdio.h>

int func1(void);

int main(void)
{
    int num;
    num = func1();
    
    printf("%d", num);

    return 0;
}

int func1(void) {
    return 10;
}