#include <stdio.h>

int main() {
    int marks1, marks2, marks3, total;
    float average;

    // Input marks
    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    // Calculate total and average
    total = marks1 + marks2 + marks3;
    average = total / 3.0;

    // Display results
    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", average);

    // Grade calculation
    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
