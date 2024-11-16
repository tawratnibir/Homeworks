#include<stdio.h>

int xor(int a, int b);

int main() {
    int p, q;

    printf("Enter P(0, 1): ");
    scanf("%d", &p);
    printf("Enter Q(0, 1): ");
    scanf("%d", &q);

    printf("P AND Q: %d\n", p && q);
    printf("P OR Q: %d\n", p || q);
    printf("P XOR Q: %d\n", xor(p,q));

    return 0;
}

int xor(int a, int b) {
    return (a || b) && !(a && b);
}