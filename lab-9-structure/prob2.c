#include <stdio.h>

struct rectangle {
    float length;
    float width;
    float area;
};

float calculate_area(float length, float width) {
    return length * width;
}

int main() {
    struct rectangle rects[10];

    printf("Enter length and width for 10 rectangles:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nRectangle %d:\n", i + 1);
        printf("Length: ");
        scanf("%f", &rects[i].length);
        printf("Width: ");
        scanf("%f", &rects[i].width);

        rects[i].area = calculate_area(rects[i].length, rects[i].width);
    }

    printf("\n--- Rectangle Details ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Rectangle %d - Length: %.2f, Width: %.2f, Area: %.2f\n",
               i + 1, rects[i].length, rects[i].width, rects[i].area);
    }

    return 0;
}

