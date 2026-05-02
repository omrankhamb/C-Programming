#include <stdio.h>

int main() {
    char str[200];
    gets(str);
    int i, j = 0;

    printf("Original string: %s\n", str);

    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}