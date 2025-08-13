#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;
    char grade;

    // Input
    printf("Enter marks for 5 subjects (each out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Determine grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Output
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
