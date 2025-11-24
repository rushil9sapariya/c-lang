#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    // Assign integer value
    d.i = 10;
    printf("After assigning d.i = 10:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n\n", d.str);

    // Assign float value
    d.f = 3.14;
    printf("After assigning d.f = 3.14:\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n\n", d.str);

    // Assign string value
    strcpy(d.str, "Hello");
    printf("After assigning d.str = \"Hello\":\n");
    printf("d.i = %d\n", d.i);
    printf("d.f = %f\n", d.f);
    printf("d.str = %s\n", d.str);

    return 0;
}
