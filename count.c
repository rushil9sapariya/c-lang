#include <stdio.h>

int main() {
    int number;
    int count = 0;

    
    printf("enter an integer: \n");
    scanf("%d", &number);

    
    if (number == 0) 
    {
        count = 1;
    } 
    else 
    {
    
        while (number != 0) 
        {
            number = number / 10;
            count++;
        }
    }

    
    printf("number of digits: %d\n", count);

    return 0;
}