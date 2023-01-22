#include <stdio.h>

int main()
{
    int num, pos;
    printf("Enter an integer:");
    scanf("%d", &num);
    printf("Enter bit position to check:");
    scanf("%d", &pos);
    if ((num >> pos) & 1)
        printf("%d bit is set for %d", pos, num);
    else
        printf("%d bit is clear for %d", pos, num);

    return 0;
}