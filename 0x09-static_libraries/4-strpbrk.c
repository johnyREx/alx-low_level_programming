#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the 1st occurrence in s of any bytes in accept
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s matches in accept, NULL for no found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0' && s[i] != ' ' && s[i] != ',')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
