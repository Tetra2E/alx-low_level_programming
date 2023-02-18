#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase reversely.
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int num;
for (num = 25; num >= 0; num--)
{
putchar(alphabet[num]);
}
putchar('\n');
return (0);
}
