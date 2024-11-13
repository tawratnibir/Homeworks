#include<stdio.h>

void func1(void);
void func2(void);

int main(void)
{
    func2();
    printf(", the sunshine patriot.");
    return 0;
}

void func2(void) {
    func1();
    printf(" soldier");
}
void func1(void) {
    printf("The summer");
}