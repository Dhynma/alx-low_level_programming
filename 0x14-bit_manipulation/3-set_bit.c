#include "main.h"

/**
 * set_bit - Set the bit at a given index to 1.
 * @n: Pointer to the input number.
 * @index: The input index.
 *
 * Return: 1 if successful, -1 if the index is out of bounds.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1ul << index; /* Create a mask to set the bit to 1 */
	*n |= mask; /* Set the bit at the specified index to 1 */

	return (1);
}
