#include<stdio.h>

#define MAX_SIZE 100

void copyArray(int *source, int *destination, int size);

int main()
{
    int array1[MAX_SIZE], array2[MAX_SIZE], size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter array1 elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    copyArray(array1, array2, size);
    
    printf("\nArray1: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", array1[i]);
    }
    
    printf("\nArray2: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", array2[i]);
    }
    
    return 0;
}

void copyArray(int *source, int *destination, int size)
{
    int i;
    
    for(i=0; i<size; i++)
    {
        *(destination+i) = *(source+i);
    }
}
