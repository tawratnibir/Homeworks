#include<stdio.h>

int main() {
    int a, b;

    a = 1;

    a++;

    b = a;

    b--;

    printf("%d \"Nibir\" %d \101 \0 aibocvnzjk",a ,b);
    // printing double quotes, prints nothing after null, 
    /* \101 = A which means the octal of A is 101, \x41 = A which means the hexadecimal of A is 41 in ASCII code */

    return 0;
}