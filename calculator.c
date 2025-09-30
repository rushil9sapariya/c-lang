#include <stdio.h>

int main() {
    int num1, num2, result;
    char operation;
    char choice;

    do {
        
        printf("enter first number: \n");
        scanf("%d", &num1);

        
        printf("enter operation (+, -, *, /): \n");
    
    
        scanf(" %c", &operation); 

        
        printf("enter second number: \n");
        scanf("%d", &num2);

        
        switch (operation) {
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
                    printf("error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("error: Invalid operation.\n");
                break;
        }

        
        printf("do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y'); 

    printf("exiting calculator ,goodbye!\n");

    return 0;
}