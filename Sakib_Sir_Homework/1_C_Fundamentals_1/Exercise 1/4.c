#include<stdio.h>

int main(void)
{
    int seconds;

    seconds = 365 * 24 * 60 * 60; 
    //365 days = 365 * 24 hours = 365 * 24 * 60 minutes = 365 * 24 * 60 * 60 seconds

    printf("%d is the number of seconds in a year", seconds);
    /**/ //Yes, correct comment

    return 0;
}
