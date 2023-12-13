#include "main.h"

/**
 * _strpbrk - located the first occurrence in S if any bytes in accept
 * @s: the string we look for occurrences in
 * @accept: the print we compare against
 *
 * Return: a pointer in the byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}

		}
		if (*(accept + j) != '\0')
		{
		return (s + i);
		}
	}
	return (0);
}
