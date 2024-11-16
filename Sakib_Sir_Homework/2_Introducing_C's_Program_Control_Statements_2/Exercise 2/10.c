#include<stdio.h>

int main() {
    for(int i=1;i<=10;i++) {
        int square = i * i;
        int cube = square * i;
        printf("Number: %d\tSquare: %d\tCube: %d\n", i, square, cube);
    }
    
    return 0;
}