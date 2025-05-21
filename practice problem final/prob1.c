#include <stdio.h>
struct Employee
{
    int employee_id;
    char name[50];
    float salary;
    char designation[50];
};

int main()
{
    int n, i;
    float total_salary = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].employee_id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Designation: ");
        scanf(" %[^\n]", emp[i].designation);

        total_salary += emp[i].salary;
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Salary: %.2f, Designation: %s\n",
               emp[i].employee_id, emp[i].name, emp[i].salary, emp[i].designation);
    }

    printf("\nTotal salary of all employees: %.2f\n", total_salary);

    return 0;
}
