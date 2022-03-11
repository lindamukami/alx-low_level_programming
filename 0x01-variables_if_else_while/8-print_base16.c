#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char aa;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (aa = 'a'; aa <= 'f'; aa++)
	{
		putchar(aa);
	}
	putchar('\n');
	return (0);
}
