#include "main.h"
/**
 * main - function to print the alphabets in lowercase followed by a newline
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char aa;

	for (aa = 'a'; aa <= 'z'; aa++)
	{
		putchar(aa);
		putchar('\n');
	}
}
