#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char aa;
	int i;

	i = 0;
	while (i < 10)
	{
		aa = 'a';
		while (aa <= 'z')
		{
			_putchar(aa);
			aa++;
		}
		_putchar('\n');
		i++;
	}
}
