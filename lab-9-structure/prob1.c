#include <stdio.h>

struct company {
    char name[50];
    float income;
    float cost;
};

int main() {
    struct company companies[20];
    float profit;

    printf("Enter details for 20 companies:\n");

    for (int i = 0; i < 20; i++) {
        printf("\nCompany %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", companies[i].name);
        printf("Income: ");
        scanf("%f", &companies[i].income);
        printf("Cost: ");
        scanf("%f", &companies[i].cost);
    }

    printf("\n--- Company Profits ---\n");
    for (int i = 0; i < 20; i++) {
        profit = companies[i].income - companies[i].cost;
        printf("Company %d (%s): Profit = %.2f\n", i + 1, companies[i].name, profit);
    }

    return 0;
}

