#include<stdio.h>

void caesarCipher(char str[], int key) {
    int i = 0;
    char ch;

    while (str[i] != '\0') {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + key) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + key) % 26 + 'a';
        }
        str[i] = ch;
        i++;
    }

    printf("%s\n", str);
}
