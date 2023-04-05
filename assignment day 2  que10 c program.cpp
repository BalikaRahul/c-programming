#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
    int jumps[n];
    int i, j;
    
    if (n == 0 || arr[0] == 0) {
        return -1;
    }
    
    jumps[0] = 0;
    
    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = jumps[j] + 1;
                break;
            }
        }
    }
    
    return jumps[n-1];
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_jumps = minJumps(arr, n);
    
    if (min_jumps == -1) {
        printf("End is not reachable\n");
    } else {
        printf("Minimum number of jumps to reach end: %d\n", min_jumps);
    }
    
    return 0;
}
