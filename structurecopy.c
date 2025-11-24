#include <stdio.h>


struct Rectangle {
    int length;
    int breadth;
};


struct Rectangle inputRectangle() {
    struct Rectangle r;

    printf("Enter the length of the rectangle: ");

    scanf("%d", &r.length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &r.breadth);

    return r;
}


int area(struct Rectangle r) {
   
    return r.length * r.breadth;
}

int main() {
 
    struct Rectangle myRectangle;
    int rectangleArea;

    printf("--- Input Rectangle Details ---\n");
    
    myRectangle = inputRectangle();

    
    rectangleArea = area(myRectangle);

    printf("\n--- Rectangle Details and Area ---\n");
    printf("Length: %d\n", myRectangle.length);
    printf("Breadth: %d\n", myRectangle.breadth);
    printf("Area: %d\n", rectangleArea);

    return 0;
}
