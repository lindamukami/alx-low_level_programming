#include <stdlib.h>
#include <time.h>
/* more headers goes here */
/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
