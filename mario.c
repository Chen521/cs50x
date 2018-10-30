#include <stdio.h>
#include <cs50.h>

int main() {
    printf("height: ");
    int num = GetInt();
    while (1) {
        if (num <= 23 && num >= 0) {
            for (int i = 2; i <= num+1; ++i) {
                for (int m = 0; m < num+1-i; ++m) {
                    printf(" ");
                }
                for (int n = 0; n < i; ++n) {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
        printf("retry: ");
        num = GetInt();
    }
}