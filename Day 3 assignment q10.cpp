#include <stdio.h>
#include <string.h>

void reverse(char*);

int main()
{
    char str[100];
    printf("Enter any String :: ");
    scanf("%s", str);
    reverse(str);
    printf("The Reverse of the String [ %s ] is ::  %s\n", str, str);
    return 0;
}

void reverse(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
