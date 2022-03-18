#include "main.h"
#include <stdio.h>



/**
 * main - function to check the code
 * if a character is an uppercase
 * character
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	int c;

	for (c = 65; c < 123; c++)
	
	{	if (c >= 'A' && c <= 'Z') 
		{
			return (1);
		}
		
		else 
	
		{
			return (0);
		
		}	
	}
}
