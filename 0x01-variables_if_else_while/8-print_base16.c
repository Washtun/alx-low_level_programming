#include <stdio.h>

/**
 * main - print using putchar all single digit number of bass 16 from 0.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	
	
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	
	putchar('\n');
	
	
	return (0);
}
