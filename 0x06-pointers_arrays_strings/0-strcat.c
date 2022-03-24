#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest - destination
 * @src - source
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for(i = 0; dest[i] != '\0'; i++);
	
	for(j = 0; src[j] != '\0'; j++);

	if (i > j)
	{
		for(k = 0; k <= i; k++)
		{
			dest[i+k] = src[k];
		}
	}
	else
	{
		for (k = 0; k <= j; k++)
		{
			dest[j+k] = src[k];
		}
	}
	dest[i+k] = '\0';
	dest[j+k] = '\0';

	return (dest);
}
