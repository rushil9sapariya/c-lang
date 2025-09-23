#include <stdio.h>

int main() {
    int marks;

    
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    
    if (marks < 0 || marks > 100) 
    {
        printf("invalid marks entered\n");
    } 
    else if (marks >= 90) 
    {
        printf("grade A\n");
    } 
    else if (marks >= 75) 
    { 
        printf("grade B\n");
        
    } 
    else if (marks >= 50) 
    {
        printf("grade C\n");
        
    } 
    else 
    { 
        printf("grade F\n");
    }

    return 0;
}
