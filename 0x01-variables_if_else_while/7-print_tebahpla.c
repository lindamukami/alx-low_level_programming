#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char aa;

	for (aa = 'z'; aa >= 'a'; aa--)
	{
		putchar(aa);
	}
	putchar('\n');
	return (0);
}
