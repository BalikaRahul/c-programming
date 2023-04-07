#include <stdio.h>

// Define the union data
typedef union {
    int i;
    float f;
} Data;

int main() {
    Data data;

    // Prompt the user for a value
    printf("Enter a value: ");
    if (scanf("%d", &data.i) == 1) {
        printf("You entered an integer value: %d\n", data.i);
    } else if (scanf("%f", &data.f) == 1) {
        printf("You entered a float value: %.2f\n", data.f);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
