#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, len, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("Number of vowels in the string: %d\n", count);

    return 0;
}
