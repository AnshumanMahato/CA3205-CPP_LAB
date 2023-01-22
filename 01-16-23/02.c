#include <stdio.h>

int main()
{
    short int num, res;
    printf("Enter a short int value:");
    scanf("%d", &num);

    res = num % 2048;
    res = res / 32;
    printf("Bitstring between the 5th and 10th position represents %d", res);
    return 0;
}