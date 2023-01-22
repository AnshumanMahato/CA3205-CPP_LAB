#include <stdio.h>
#include <math.h>

int main()
{
    int lim, i, j;
    printf("Enter limit:");
    scanf("%d", &lim);

    for (i = 0; i < lim; i++)
    {
        char ch = 'A';
        for (j = -(lim - 1); j < lim; j++)
        {
            if (abs(j) <= i)
            {
                if (j < 0)
                    printf("%c", ch++);
                else
                    printf("%c", ch--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}