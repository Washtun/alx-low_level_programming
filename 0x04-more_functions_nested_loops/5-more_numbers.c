#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 * function that prints 10 times the
 * numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0, j;
	
	while(i < 10)
	{
		for(j = 48; j < 63; j++)
			_putchar('j');

		_putchar('\n');
		i++;
	}
	
	_putchar('\n');
}
