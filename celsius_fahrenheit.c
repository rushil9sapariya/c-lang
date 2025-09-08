#include <stdio.h>
int main() {
    float celsuis,fahrenheit;
    printf("enter temperature in celsius: ");
    scanf("%f", &celsuis);
    fahrenheit = (celsuis * 9/5) + 32;
    printf("temperature in fahrenheit: %f \n", fahrenheit);
    return 0;
}