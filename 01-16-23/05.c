#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, size, i, j, temp, dup = 0;
    printf("Enter size for the array:");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    printf("Enter %d values in the array:", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    // sort

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // duplicate check
    for (i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
            dup++;
    }

    printf("No. of duplicate values in array: %d", dup);

    return 0;
}