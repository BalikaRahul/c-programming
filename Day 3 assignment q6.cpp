#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2, flag = 1;

    printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for(i = 0; i < len1; i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq1[str1[i] - 'a']++;
        }

        if(str2[i] >= 'a' && str2[i] <= 'z')
        {
            freq2[str2[i] - 'a']++;
        }
    }

    for(i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are not anagrams.\n");
    }

    return 0;
}
