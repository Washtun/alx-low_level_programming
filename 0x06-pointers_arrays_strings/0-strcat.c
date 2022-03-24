#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Function for concatenating two strings 
 * in C
 *
 * Return: Always 
 */

char *_strcat(char *dest, char *src)
{
	char str1[], str2[];
	dest = str1;
	src = str2;
	int i, j;
	
	i = strlen(str1);
	while(dest[i] != '\0')
	{
		i++;
	}
	
	j=0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++
	}
	dest[i] = '\0';
	return (dest);
	

}
