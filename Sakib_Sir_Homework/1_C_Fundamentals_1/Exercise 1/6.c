#include<stdio.h>

// void func1(void);
// void func2(void);
// removing the prototypes shows error in the execution.
// to see output, erase the slashes in line 3 and 4
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