#include<stdio.h>
void print(void); 
int n=5;
int main(void)
{
    print();

    return 0;
}

void print(void) {
    if(n==0) return;
    printf("Hello world!\n");
    n--;
    print();
}
