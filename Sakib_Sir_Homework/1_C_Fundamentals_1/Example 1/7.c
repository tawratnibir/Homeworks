#include<stdio.h>
int main(void)
{
    int count, num, value;
    count = 5;
    num = 10;
    value = 2;

    printf("%d ", count *num+88/value-19%count);
    printf("%d ", (count * num) + (88 / value) - (19 % count));

    return 0;
}
