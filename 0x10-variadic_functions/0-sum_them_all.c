#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, a, b;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	sum = 0;
	for (b = 0; b < n; b++)
	{
		a = va_arg(nums, int);
		sum += a;
	}
	va_end(nums);
	return (sum);
}
