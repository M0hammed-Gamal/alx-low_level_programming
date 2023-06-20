#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued
 *	fibonacci sequence not exceed 4milliion
 *
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			brak;

		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}