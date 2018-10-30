#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    printf("change owed: ");
    float in = GetFloat();
    int chg = roundf(in*100);
    int acc = 0;
    while (1) {
        if (chg >= 0) {
            if (chg >= 25) {
                acc += (chg / 25);
                chg = chg % 25;
            }
            if (chg >= 10) {
                acc += (chg / 10);
                chg = chg % 10;
            }
            if (chg >= 5) {
                acc += (chg / 5);
                chg = chg % 5;
            }
            acc += chg;
            printf("%d\n", acc);
            break;
        }
        printf("Retry: ");
        in = GetFloat();
    }
}