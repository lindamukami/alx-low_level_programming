#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination
 * @src: source
 * @n: number of bytes of str to concatenate
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
