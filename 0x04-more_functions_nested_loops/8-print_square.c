#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int cl, rw;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cl = 1; cl <= size; cl++)
		{
			_putchar('#');
			for (rw = 2; rw <= size; rw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
