#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */

int main(void)
{
char letters[26] = "abcdefghijklmnopqrstuvwxyz";
char LETTERS[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(letters[i]);
}
for (i = 0; i < 26; i++)
{
putchar(LETTERS[i]);
}
putchar('\n');
return (0);
}
