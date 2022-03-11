#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * then in uppercase
 * followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char aa;

	for (aa = 'a'; aa <= 'z'; aa++)
	{
		putchar(aa);
	}
	for (aa = 'A'; aa <= 'Z'; aa++)
	{
		putchar(aa);
	}
	putchar('\n');
	return (0);
}
