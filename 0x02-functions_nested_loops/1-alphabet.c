#include "main.h"
#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void) 
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{

		_putchar(c);

	}

	_putchar('\n');

	return (0);
}

