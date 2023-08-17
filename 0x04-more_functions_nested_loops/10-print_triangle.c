#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, rw, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rw = 0; rw <= (size - 1); rw++)
		{
			for (sp = 0; sp < (size - 1) - rw; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= rw; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
