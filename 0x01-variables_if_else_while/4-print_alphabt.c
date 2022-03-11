#include <stdio.h>
/*
 * main - to print all leters except q and e,
 * use putchar function
 */

int main(void)
{
	char aa = 'a';

	while (aa <= 'z')
	{
		if (aa != 'e' && aa != 'q')
		{
			putchar(aa);
		}
		aa++;
	}
	putchar('\n');
	return (0);
}
