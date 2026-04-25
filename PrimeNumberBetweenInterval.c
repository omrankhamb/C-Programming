#include <stdio.h>

int main() { 
    int n, m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
  
    for (int j = n; j <= m; j++) {
    int count = 0;         // reset count for each number
        for (int i = 1; i <= j; i++) {
            if (j % i == 0) {
                count++;
            }
        }
        if (count == 2) {   // prime numbers have exactly 2 divisors
            printf("%d\n", j);
        }
    }
    return 0;
}