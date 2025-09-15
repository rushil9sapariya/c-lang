#include <stdio.h>
int main() {
    int x=5;
    int result1 = x++;
    printf("post increment = %d \n", result1);
    int result2 = ++x;
    printf("pre increment = %d \n", result2);
    return 0;
}