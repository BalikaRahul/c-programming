#include <stdio.h>

int main() {
    int arr[100], n, largest1, largest2;

    // read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // read the elements of the array
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // find the largest element in the array
    largest1 = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest1) {
            largest1 = arr[i];
        }
    }

    // find the second largest element in the array
    largest2 = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }

    // print the results
    printf("The largest element in the array is %d\n", largest1);
    printf("The second largest element in the array is %d", largest2);

    return 0;
}
