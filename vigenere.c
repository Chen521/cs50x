#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

void Rotate (char s, int n);
int getRotate (char s);
int checkKey (char *s);

int main(int argc, string argv[]) {
    if (argc == 2) {
        char *k = argv[1];
        if (!checkKey(k)) {
            printf("key has to be all letters\n");
            return 1;
        }
        string s = GetString();
        int ctr = 0;
        int r;
        for (int i = 0; i < strlen(s); ++i) {
            r = getRotate(k[ctr % strlen(k)]);
            Rotate(s[i], r);
            if ((s[i] >= 65 && s[i] < 91) || (s[i] >= 97 && s[i] < 123)) {
                ++ctr;
            }
        }
        printf("\n");
        return 0;
    } else {
        printf("Expected exactly 1 command line input\n");
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

int getRotate (char s) {
    if (s >= 65 && s < 91) {
        return s - 65;
    } else if (s >= 97 && s < 123) {
        return s - 97;
    } else {
        return -1;
    }
}

int checkKey (char *s) {
    for (int i = 0; i < strlen(s); ++i) {
        if (!((s[i] >= 65 && s[i] < 91) || (s[i] >= 97 && s[i] < 123))) {
            return 0;
        }
    }
    return 1;
}