#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3 only.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5 only.\n", num);
    } else {
        printf("%d is not divisible by 3 or 5.\n", num);
    }

    return 0;
}