#include "main.h"

/**
 * main - A function that reverses a string
 *
 * in C 
 * 
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	 int i, j, n = 0;
	

  while (a[n] != '\0')

  {

    n++;

  }

  j = n - 1;



  for (i = 0; i < n; i++)

  {

    a[i] = a[j];

    j--;

  }

 return (*a);
}
