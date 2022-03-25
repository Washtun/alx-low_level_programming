#include "main.h"
#include <stdio.h>

/**
 * main - function that copies a string
 *
 * Return: Always 
 */

char *_strncpy(char *dest, char *src, int n)
{
	 
	char str1[];
	char str2[];
	dest = str1;
	src = str2;
	int i;
 
	 for (i=0; src[i]; i++)
	 	dest[i] = src[i];	
	 dest[i] = ‘\0’;

	 return (*dest);
}
