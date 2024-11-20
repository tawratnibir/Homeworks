#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main() {
    srand(time(NULL));
    int n, decimal, l, m;
    scanf("%d", &n);

    l = n / 4;
    m = n % 4;
    decimal = 0;

    

    if(m!=0) {
        for(int i=0;i<(4-m);i++) {
            printf("0");
        }


        for(int i=m;i>0;i--) {
            int p = rand() % 2;
            printf("%d", p);
            decimal += p * pow(2, i-1);
        }
        if(decimal < 10) {
            printf("\t%d\n", decimal);
        }
        else {
            char   q = 'A' - 10 + decimal;
            // int res = 'A' + decimal - 10;
            printf("\t%c\n", q);
        }
        decimal = 0;
    }

    for(int i=0;i<l;i++) {
        decimal = 0;

        for(int j=4;j>0;j--) {
            int p = rand() % 2;
            decimal += p * pow(2, j - 1);
            printf("%d", p);
        }
        if(decimal < 10) {
            printf("\t%d\n", decimal);
        }
        else {
            char   q = 'A' - 10 + decimal;
            // int res = 'A' + decimal - 10;
            printf("\t%c\n", q);
        }
        // printf("\n%d\n", decimal);
    }

    return 0;
}
