#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, base = 1, last_digit;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        last_digit = bin % 10;
        dec = dec + (last_digit * base);
        bin = bin / 10;
        base = base * 2;
    }

    printf("Equivalent Decimal Number: %d\n", dec);
    return 0;
}
