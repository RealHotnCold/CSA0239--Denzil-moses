#include <stdio.h>

int main() {
    int num, d1, d2, d3, sum, product, reversed;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract digits
    d1 = num / 100;           // Hundreds place
    d2 = (num / 10) % 10;     // Tens place
    d3 = num % 10;            // Units place

    // Compute sum and product
    sum = d1 + d2 + d3;
    product = d1 * d2 * d3;

    // Reverse the number
    reversed = d3 * 100 + d2 * 10 + d1;

    // Output
    printf("Digits: %d, %d, %d\n", d1, d2, d3);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
