#include "main.h"
/**
 * print_alphabet - print the alphabets in lowercase followed by a newline
 */
void print_alphabet(void)
{
	char aa;

	aa = 'a';

	while (aa <= 'z')
	{
		_putchar(aa);
		aa++
	}

	_putchar('\n');
}
