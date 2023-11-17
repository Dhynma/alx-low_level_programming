#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: Pointer to the string of 0's and 1's.
 *
 * Return: The equivalent unsigned integer or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;  /* Shift left and set the least significant bit to 1 */
		else if (b[i] == '0')
			result <<= 1;  /* Only shift left */
		else
			return (0);  /* Invalid character encountered, return 0 as an error indicator */
	}

	return (result);
}
