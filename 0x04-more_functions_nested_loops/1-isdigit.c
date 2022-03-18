#include "main.h"
#include <stdio.h>


/**
 * main - function to check for digit
 *in a set of characters
 * Return: Always 0.
 */

int _isdigit(int c)
{
        int c;

        for (c = 48; c < 58; c++)
        {
		if (c >= '0' && c <= '9') 
		{
			
			return (1);
		}

		else 
		{

			return (0);
		}
	
	}
        
}
