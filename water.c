#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("minutes: ");
    int num = GetInt();
    while (1) {
        if (num >= 0) {
            printf("bottles: %d\n", num*12);
            break;
        }
        printf("retry: ");
        num = GetInt();
    }
}