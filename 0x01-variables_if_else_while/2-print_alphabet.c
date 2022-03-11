#include <stdio.h>
/* main prints the alphabet in lowercase followed by \n */

int main(void)
{
	char aa;

	for (aa = 'a'; aa <= 'z'; aa++)
	{
		putchar(aa);
	}
	putchar('\n');
	return (0);
}
