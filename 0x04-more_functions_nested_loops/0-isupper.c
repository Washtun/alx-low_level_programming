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
	if ((char)c >= 'A' && (char)c <= 'Z') 
	{
			
		return (1);
	}
	else 
	{
		return (0);
	}	
        
}
