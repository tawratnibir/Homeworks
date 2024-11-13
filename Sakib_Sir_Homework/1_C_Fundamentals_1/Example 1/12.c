#include<stdio.h>

void func1(void);

int main(void)
{
    printf("I ");
    func1();
    printf("C.");

    return 0;
}
void func1(void) {
    printf("like ");
}
