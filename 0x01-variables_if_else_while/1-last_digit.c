#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print a random number
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (LastDigit > 5)
	{
		printf("last digit of n is greater than 5 %d\n", n);
	}
	else if (LastDigit == 0)
	{
		printf("last digit of n is zero %d\n", n);
	}
	else
	{
		(LastDigit < 6 != 0)
		printf("last digit of n is not equal to 0 %d\n", n);
	}
	return (0);
}
