#include "main.h"

/**
 * _memset - this memory set function
 * @s: string
 * @b: a character
 * @n: an integer
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
