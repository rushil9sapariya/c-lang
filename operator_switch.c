#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("enter an operator (+, -, *, /):\n");
    scanf(" %c", &operator); 

    printf("enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) 
            {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } 
            else 
            {
                printf("error: division by zero is not allowed.\n");
            }
            break;
        default:
            printf("error: invalid operator entered.\n");
    }

    return 0;
}