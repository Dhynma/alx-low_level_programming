#include "main.h"

/**
 * get_bit - Get the bit at a given index.
 * @n: The input number.
 * @index: The input index.
 *
 * Return: The bit at the specified index (0 or 1), or -1 if index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;
	int bit;

	if (index > 63)
		return (-1);

	mask = 1ul << index; /* Create a mask to extract the bit */
	bit = (n & mask) >> index; /* Extract the bit and shift to position 0 or 1 */

	return (bit);
}
