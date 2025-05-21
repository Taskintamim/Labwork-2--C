#include <stdio.h>
int main()
{
    int item[5][3];
    int unit = 0;
    int price = 0;
    int rating = 0;
    int x = 0;
    int i;
    printf("Enter details for 5 stationary items:");
    for (i = 0; i < 5; i++)
    {
        printf(" Item %d:\n", i + 1);
        printf("Units: ");
        scanf("%d", &item[i][0]);
        printf("Price : ");
        scanf("%d", &item[i][1]);
        printf("Rating: ");
        scanf("%d", &item[i][2]);

     unit += item[i][0];
        price += item[i][0] * item[i][1];
        if (item[i][2] > rating) {
            rating = item[i][2];
            x = i;
        }
    }
    printf("\nTotal units in stock: %d\n", unit);
    printf("Total inventory value: %d Taka\n", price);
    printf("Item with the highest rating: Item %d\n", x + 1);

    return 0;
}
