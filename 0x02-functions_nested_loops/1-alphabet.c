#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

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

