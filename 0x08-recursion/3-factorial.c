#include "main.h"
/**
 * factorial - function that returns the factorial of a number
 * @n: the given number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}
