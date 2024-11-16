#include<stdio.h>


int main() {
    int magic_number, tries, guess;
    magic_number = 7;
    tries = 1;

    for(int i=0;i<10;i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess == magic_number) {
            printf("Right!\nYou got it in %d try/ies!", tries);
            break;
        }
        else{
            if(guess > magic_number) {
                printf("Wrong!\nYour number is higher.\n");
            }
            else{
                printf("Wrong!\nYour number is lower.\n");
            }
            tries++;
        }
    }
}
