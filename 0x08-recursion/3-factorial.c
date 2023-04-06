#include "main.h"

/**
 * Factorial - computes the factorial of a number.
 * @n: the number whose factorial is to be computed
 *
 * Return: factorial of n. If n is less than 0, return -1 to indicate an error.
*/
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
