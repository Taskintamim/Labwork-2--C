#include <stdio.h>

int main() {
    int arr[10], even[10], odd[10];
    int *p = arr;
    int e = 0, o = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", p + i);

        if (*(p + i) % 2 == 0)
            even[e++] = *(p + i);
        else
            odd[o++] = *(p + i);
    }

    printf("Even numbers: ");
    for (int i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers: ");
    for (int i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}

