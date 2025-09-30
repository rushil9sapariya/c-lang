#include <stdio.h>

int main() {
    int number; 
    int factorial = 1;
    int i = 1;

    printf("enter a non-negative integer: \n");
    scanf("%d", &number);

    
    if (number < 0) 
    {
        printf("factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        
        while (i <= number) 
        {
            factorial=factorial*i;
            i++;            
        }
        printf("the factorial of %d is %d\n", number, factorial);
    }

    return 0; 
}