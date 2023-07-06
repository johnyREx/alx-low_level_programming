#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if no invalid character or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int decimal = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = decimal * 2 + (b[i] - '0');
		i++;
	}

	return (decimal);
}
