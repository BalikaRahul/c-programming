#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4};
   int n = sizeof(arr) / sizeof(arr[0]);
   int i, temp, isPalindrome = 1;
   
   for(i=0; i<n/2; i++) {
      temp = arr[i];
      arr[i] = arr[n-i-1];
      arr[n-i-1] = temp;
   }
   
   for(i=0; i<n; i++) {
      if(arr[i] != arr[n-i-1]) {
         isPalindrome = 0;
         break;
      }
   }
   
   if(isPalindrome == 1)
      printf("The array is a palindrome array.");
   else
      printf("The array is not a palindrome array.");
      
   return 0;
}
