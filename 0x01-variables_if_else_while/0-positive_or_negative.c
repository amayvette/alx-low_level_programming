#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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