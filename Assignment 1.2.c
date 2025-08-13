#include <stdio.h>

int main() {
    int age;
    float gpa;
    char initial;
    double balance;

    // Input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter the initial of your name: ");
    scanf(" %c", &initial);  // Space before %c to consume any leftover newline

    printf("Enter your bank balance: ");
    scanf("%lf", &balance);

    // Output
    printf("\n--- User Info ---\n");
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Initial: %c\n", initial);
    printf("Bank Balance: %.2lf\n", balance);

    return 0;
}
