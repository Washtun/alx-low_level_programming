#include "main.h"
#include <string.h>

/**
 * main - function that write a string in reverse order
 *
 * Return: Always 
 */

void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for(i =0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		_putchar(temp);
	}
	_putchar('\n');
}
