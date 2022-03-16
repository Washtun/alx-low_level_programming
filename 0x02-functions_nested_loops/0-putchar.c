#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
    
    return (0);
}
