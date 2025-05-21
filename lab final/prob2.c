#include <stdio.h>
int main()
{
    int salary, deduction, incometax, paytax;
    printf("Enter annual salary :");
    scanf("%d", &salary);
    printf("Enter deductions:");
    scanf("%d", &deduction);
    incometax = salary - deduction;
    if(incometax <=250000)
    {
        printf("No tax!");
    }
    else if(incometax<=500000)
    {
        paytax = incometax*0.1;
    }
    else if(incometax > 500000)
    {
        paytax = incometax*0.2;
    }
    printf("Taxable income : %d\n", incometax);
    printf("Tax payable : %d\n", paytax);
    return 0;
}
