#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char letter1 = a, letter2 = z;
for (char letter = letter1; letter <= letter2; letter++)
{
putchar(letter);
}
putchar("\n");
return (0);
}
