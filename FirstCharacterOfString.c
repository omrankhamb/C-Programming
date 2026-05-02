#include<stdio.h>

void first(char s1[]) {
    int i = 0;
    printf("%c ",s1[0]);
    while (s1[i] != '\0') {
        if (s1[i] == ' ' || s1[i] == 'O') {
            printf("%c ", s1[i+1]);
        }
        i++;
    }
    printf("\n"); // Print a newline
}

int main() {
    char str[50];
    printf("Enter string: ");
    gets(str);
    puts(str);
    printf("\n");
    first(str);
    return 0;
}