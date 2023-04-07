#include <stdio.h>
#include <math.h>

// Define the union shape
typedef union {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
} Shape;

int main() {
    char shape_type;
    Shape shape;
    float area;

    // Prompt the user for the shape type
    printf("Enter the shape type (c for circle or r for rectangle): ");
    scanf("%c", &shape_type);

    // Prompt the user for the appropriate dimensions
    if (shape_type == 'c') {
        printf("Enter the circle's radius: ");
        scanf("%f", &shape.radius);
        area = M_PI * pow(shape.radius, 2);
        printf("The area of the circle with radius %.2f is %.2f.\n", shape.radius, area);
    } else if (shape_type == 'r') {
        printf("Enter the rectangle's length: ");
        scanf("%f", &shape.rectangle.length);
        printf("Enter the rectangle's width: ");
        scanf("%f", &shape.rectangle.width);
        area = shape.rectangle.length * shape.rectangle.width;
        printf("The area of the rectangle with length %.2f and width %.2f is %.2f.\n", shape.rectangle.length, shape.rectangle.width, area);
    } else {
        printf("Invalid shape type.\n");
    }

    return 0;
}
