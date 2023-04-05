#include <stdio.h>

int main() {
   int array[10], even[10], odd[10], i, j = 0, k = 0, n;
   
   printf("Enter the size of array: ");
   scanf("%d", &n);
   
   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &array[i]);
   }
   
   for (i = 0; i < n; i++) {
      if (array[i] % 2 == 0) {
         even[j] = array[i];
         j++;
      } else {
         odd[k] = array[i];
         k++;
      }
   }
   
   printf("\nEven elements of array: ");
   for (i = 0; i < j; i++) {
      printf("%d ", even[i]);
   }
   
   printf("\nOdd elements of array: ");
   for (i = 0; i < k; i++) {
      printf("%d ", odd[i]);
   }
   
   return 0;
}
