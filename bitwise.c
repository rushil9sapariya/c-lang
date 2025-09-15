#include <stdio.h>

int main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);

    
    printf("%d is %s\n", num, (num & 1) ? "odd" : "even");

    return 0;
}