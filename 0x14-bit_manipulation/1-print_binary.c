#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = (sizeof(unsigned long int) * 8) - 1;
	int printed = 0;

	mask = mask << bit_count;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if ((n & mask) == 0)
		{
			if (printed == 1)
				_putchar('0');
		}

		else
		{
			_putchar('1');
			printed = 1;
		}


		mask = mask >> 1;
	}
}
