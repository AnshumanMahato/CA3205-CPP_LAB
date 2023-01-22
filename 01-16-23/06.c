#include <stdio.h>
#include <stdlib.h>

void isIdentical(int *, int *, int, int);

int main()
{
    int *arr1, *arr2, size1, size2, i;
    printf("Enter sizes for array 1 and array 2:");
    scanf("%d%d", &size1, &size2);
    arr1 = (int *)malloc(size1 * sizeof(int));
    arr2 = (int *)malloc(size2 * sizeof(int));
    printf("Enter %d values in the array1:", size1);
    for (i = 0; i < size1; i++)
    {
        scanf("%d", arr1 + i);
    }
    printf("Enter %d values in the array2:", size2);
    for (i = 0; i < size2; i++)
    {
        scanf("%d", arr2 + i);
    }

    isIdentical(arr1, arr2, size1, size2);

    return 0;
}

void isIdentical(int *a1, int *a2, int s1, int s2)
{
    int i;
    if (a1 == a2)
        printf("Given pointers point to the same array");
    else if (s1 != s2)
        printf("Arrays are not identical");
    else
    {
        for (i = 0; i < s1; i++)
        {
            if (a1[i] != a2[i])
                break;
        }

        if (i != s1)
            printf("Arrays are not identical");
        else
            printf("Arrays are identical");
    }
}