#include <stdio.h>

int main() {
    int n, bin = 0, place = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        bin = bin + rem * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", bin);

    return 0;
}