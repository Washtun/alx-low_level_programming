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

int _islower(int c)
{
        int c;

        for (c = 65; c < 123; c++)
        {
		if ((char)c >= 'a' && (char)c <= 'z') 
		{
			
			return (1);
		}

		else 
		{

			return (0);
		}
	
	}

                
      
        return (0);
}


