#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: function pointer
 * @...: variable of parameters to calculate the sum
 *
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int l, sum = 0;

	va_start(ap, n);

	for (l = 0; l < n; l++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
