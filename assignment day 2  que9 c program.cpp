#include <stdio.h>

int main() {
   int arr[100], n, i, j, temp;
   
   printf("Enter the value of N: ");
   scanf("%d", &n);
   
   printf("Enter the numbers: \n");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
   }
   
   /* Sort the array in descending order */
   for(i=0; i<n; i++) {
      for(j=i+1; j<n; j++) {
         if(arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   
   /* Print the sorted array */
   printf("The numbers arranged in descending order are given below:\n");
   for(i=0; i<n; i++) {
      printf("%d\n", arr[i]);
   }
   
   return 0;
}
