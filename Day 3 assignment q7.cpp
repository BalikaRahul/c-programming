#include <stdio.h>

int main()
{
    char str[100];
    int sum = 0, i = 0;
    
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    
    while(str[i])
    {
        sum += str[i];
        i++;
    }
    
    printf("Sum of all characters : %d", sum);

    return 0;
}
