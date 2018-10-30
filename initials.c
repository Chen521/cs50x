#include <stdio.h>
#include <string.h>
#include <cs50.h>

void PrintUpper(char s) {
    if (s >= 65 && s < 91) {
        printf("%c", s);
    } else if (s >= 97 && s < 123) {
        printf("%c", (char) s - 32);
    } else {
        printf("%c", s);
    }
}

int main(void) {
    string s = GetString();
    for (int i = 0; i < strlen(s); ++i) {
        if (i == 0) {
            PrintUpper(s[i]);
        } else if (s[i] == ' ') {
            PrintUpper(s[i+1]);
        }
    }
    printf("\n");
}