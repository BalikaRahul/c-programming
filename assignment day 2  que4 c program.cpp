#include <stdio.h>

int main() {
    int arr[100], n, max_diff = 0, i, j;

    // read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // read the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // find the maximum difference between two elements
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[j] - arr[i] > max_diff) {
                max_diff = arr[j] - arr[i];
            }
        }
    }

    // print the maximum difference
    printf("The maximum difference between two elements is %d.\n", max_diff);

    return 0;
}
