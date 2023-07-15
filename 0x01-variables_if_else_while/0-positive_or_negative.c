#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or equal to zero
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
		printf("number greater than 0 is positive: %d\n", n);
	}
		else if (n == 0)
		{
		printf("number equal to zero: %d\n", n);
	}
	else
	{	(n < 0)
		printf("number less than 0 is negative: %d\n", n);
	}
return (0);
}
