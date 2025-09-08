#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    printf("enter length of rectangle: ");
    scanf("%f", &length);
    printf("enter width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("area of rectangle: %f \n", area);
    printf("perimeter of rectangle: %f \n", perimeter);
    return 0;
}