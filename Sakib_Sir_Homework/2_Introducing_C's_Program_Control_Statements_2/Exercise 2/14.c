#include<stdio.h>


int main() {
    int room_number, length, width, square_footage;
    square_footage = 0;

    printf("Enter the number of rooms: \n");
    scanf("%d", &room_number);

    for(int i=1;i<=room_number;i++) {
        printf("Enter the length of your room number%d: \n", i);
        scanf("%d", &length);
        printf("Enter the width of your room number%d: \n", i);
        scanf("%d", &width);
        square_footage += (length * width);
    }
    printf("Square footage: %d", square_footage);
}
