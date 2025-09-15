#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("enter three integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("largest number is: %d\n", largest);

    return 0;
}