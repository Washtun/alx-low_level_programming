#include "main.h"

/**
 * main - function that prints a string
 * followed ba a new line to stdout
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
