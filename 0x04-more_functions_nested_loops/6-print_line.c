#include "main.h"
#include <stdio.h>

/**
 * print_line - entry point
 *
 * Description: Prints a line based on variable n
 *
 * @n:variable
 *
 * Return: void
 */


void print_line(int n)
{
		int i;

		if (n > 0)
		{
			for (i = 0; i < n; i++)
			_putchar('_');
		}
		else
		{	
			_putchar('\n');

		}
		
		_putchar('\n');
}
