#include "main.h"
/**
 * main - Prints _putchar, followed by a new line
 *Return: Always 0 (success)
 */
int main(void)
{
	char c[8] = "_putchar";
	int a = 0;

	while (a < 8)

	{
		_putchar(c[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
