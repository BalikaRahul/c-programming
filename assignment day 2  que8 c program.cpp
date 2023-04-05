#include <stdio.h>

int main() {
   int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
   int n = sizeof(arr) / sizeof(arr[0]);
   int i, j, freq;
   
   for(i=0; i<n; i++) {
      freq = 1;
      
      /* Check if the element is already counted */
      for(j=i+1; j<n; j++) {
         if(arr[i] == arr[j]) {
            freq++;
            /* Mark the element as counted */
            arr[j] = -1;
         }
      }
      
      /* Skip the element if already counted */
      if(arr[i] != -1) {
         printf("Element %d occurs %d times\n", arr[i], freq);
      }
   }
   
   return 0;
}
