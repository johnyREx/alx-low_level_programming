#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: the char value
 */
char *_strstr(char *haystack, char *needle)
{
char *haystack_pr, *needle_pr;

while (*haystack != '\0')
{
haystack_pr = haystack;
needle_pr = needle;

while (*needle_pr == *haystack_pr && needle_pr != '\0' && haystack_pr != '\0')
{
needle_pr++;
haystack_pr++;
}
if (needle_pr == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
