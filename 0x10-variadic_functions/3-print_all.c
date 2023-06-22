#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: where format is a list of types of arguments passed to the function
 * @...: prints a varaible of numbers
 */
void print_all(const char * const format, ...)
{
	int l = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[l])
		{
			switch (format[l])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;

				default:
					l++;
					continue;
			}
			sep = ", ";
			l++;
		}
	}

	printf("\n");
	va_end(list);
}
