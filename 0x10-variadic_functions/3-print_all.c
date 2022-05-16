#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	char *str, ch;
	va_list print;

	va_start(print, format);
	while (format && format[a])
	{
		ch = format[a + 1];
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				b = 1;
				break;
			case 'a':
				printf("%i", va_arg(print, int));
				b = 1;
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				b = 1;
				break;
			case 's':
				str = va_arg(print, char *);
				b = 1;
				if (str == NULL)
					str = "(nil)";
				printf("%s", str), b = 1;
				break;
		}
		if (b > 0 && (ch == 'c' || ch == 'a' || ch == 'f' || ch == 's'))
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(print);
}
