#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("enter your name: ");
    scanf("%49s", name); 
    printf("enter your age: ");
    scanf("%d", &age);
    printf("hello %s, you are %d years old \n", name, age);
    return 0;
}