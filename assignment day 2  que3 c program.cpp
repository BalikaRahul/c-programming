#include <stdio.h>

int main() {
    int arr[100], n, temp, i, j, second_largest, second_smallest, sum = 0;
    float avg;

    // read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // read the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array in descending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // find the second largest and second smallest elements
    second_largest = arr[1];
    second_smallest = arr[n-2];

    // calculate the average of these two elements
    sum = second_largest + second_smallest;
    avg = (float) sum / 2;

    // check if the average is present in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            printf("The average number %f is present in the array.\n", avg);
            return 0;
        }
    }

    // if the average is not present in the array
    printf("The average number %f is not present in the array.\n", avg);

    return 0;
}
