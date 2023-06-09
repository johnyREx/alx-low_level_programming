#include "main.h"

/**
 * _strcpy - copies *src string including \0 to *dest
 * @dest: destination string
 * @src: given string
 * Return: to pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
