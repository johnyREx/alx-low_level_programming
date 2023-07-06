#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit form.
 * @index: the index of the bit to retrieve.
 *
 * Return: the value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = mask << index;

	if ((n & mask) == 0)
			return (0);

			else

			return (1);
}
