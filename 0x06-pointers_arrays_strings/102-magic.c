#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a[5] = {98, 198, 298, 398, 498};
    int *p;

    p = &a[2] - 1;
    printf("a[2] = %d\n", *(p + 2));

    return (0);
}

