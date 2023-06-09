#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substing
 * @s: giving string
 * @accept: giving substring
 * Return: the # of bytes in the initial segment of s consist only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0;

	while (s[i] != '\0' && s[i] != ' ' && s[i] != ',')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
