#include <stdio.h>

int main()
 {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    for ( ; num != 0; num /= 10) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
    }

    printf("Reverse of the number: %d\n", reversed);

    return 0;
}
