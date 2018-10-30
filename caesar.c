#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

void Rotate (char s, int n);

int main(int argc, string argv[]) {
    if (argc == 2) {
        string s = GetString();
        int k = atoi(argv[1]) % 26;
        for (int i = 0; i < strlen(s); ++i) {
            Rotate(s[i], k);
        }
        printf("\n");
        return 0;
    } else {
        printf("Expected exactly 1 command line input");
        return 1;
    }
}

void Rotate (char s, int n) {
    if (s >= 65 && s < 91) {
        printf("%c", (s - 65 + n) % 26 + 65);
    } else if (s >= 97 && s < 123) {
        printf("%c", (s - 97 + n) % 26 + 97);
    } else {
        printf("%c", s);
    }
}