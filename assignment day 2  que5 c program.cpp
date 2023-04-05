#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    // read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // read the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // remove duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[j] == arr[i]) {
                // shift elements to the left to remove duplicate
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--; // reduce the size of the array
                j--; // recheck the element at the same index
            }
        }
    }

    // print the array without duplicate elements
    printf("Resultant Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
