#include <stdio.h>

int main()
{
    int marks[5][3];
    float average;
    int i, j;
    int passed = 0;
    printf("Enter marks for 5 students in 3 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
    {
        int sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += marks[i][j];
        }
        average = sum / 3.0;
        printf("Student %d: Average = %.2f, ", i+1, average);
        if(average >= 40)
        {
            printf("Pass\n");
            passed++;
        }
        else
        {
            printf("Fail\n");
        }
    }
    printf("Total Passed: %d\n", passed);
    return 0;
}
1
