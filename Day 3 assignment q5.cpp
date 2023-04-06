#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int i, j, max, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        freq[i] = 1;
        for(j = i + 1; j < len; j++)
        {
            if(str[i] == str[j] && str[i] != ' ' && str[i] != '\n')
            {
                freq[i]++;
                str[j] = '0';
            }
        }
    }

    max = freq[0];
    for(i = 0; i < len; i++)
    {
        if(max < freq[i])
        {
            max = freq[i];
        }
    }

    printf("Max repeated character in the string = ");
    for(i = 0; i < len; i++)
    {
        if(freq[i] == max && str[i] != '0')
        {
            printf("%c\n", str[i]);
            printf("It occurs %d times\n", freq[i]);
        }
    }

    return 0;
}
