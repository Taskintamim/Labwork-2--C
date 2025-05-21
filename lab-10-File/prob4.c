#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 15
#define TESTS 7

float calculateAverage(int marks[]) {
    int min = marks[0], sum = 0;

    for (int i = 0; i < TESTS; i++) {
        if (marks[i] < min)
            min = marks[i];
        sum += marks[i];
    }

    return (sum - min) / 6.0;
}

int main() {
    FILE *input, *output;
    int marks[STUDENTS][TESTS];
    float finalMark;

    input = fopen("students_input.txt", "r");
    if (input == NULL) {
        printf("Error opening students_input.txt file.\n");
        return 1;
    }

    output = fopen("students_output.txt", "w");
    if (output == NULL) {
        printf("Error opening students_output.txt file.\n");
        fclose(input);
        return 1;
    }

    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < TESTS; j++) {
            fscanf(input, "%d", &marks[i][j]);
        }
    }

    fprintf(output, "Final marks of 15 students:\n");
    printf("Final marks of 15 students:\n");
    for (int i = 0; i < STUDENTS; i++) {
        finalMark = calculateAverage(marks[i]);
        fprintf(output, "Student %2d: %.2f\n", i + 1, finalMark);
        printf("Student %2d: %.2f\n", i + 1, finalMark);
    }

    fclose(input);
    fclose(output);

    return 0;
}
