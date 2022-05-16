#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: charcter used to seperate numbers
 * @n: number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, b;
	va_list nums;

	va_start(nums, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(nums, int);
		printf("%i", b);
		if (a < (n - 1) && separator !=  NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
