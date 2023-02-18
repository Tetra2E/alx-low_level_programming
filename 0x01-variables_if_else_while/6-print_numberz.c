#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */

int main(void)
{
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
for (i = 0; i < 10; i++)
{
putchar(num[i]);
}
putchar('\n');
return (0);
}
