#include "main.h"

/**
 * flip_bits - Count the differing bits between two numbers.
 * @n: The first input number.
 * @m: The second input number.
 *
 * Return: The number of differing bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;

		m >>= 1;
		n >>= 1;
	}

	return (count);
}
