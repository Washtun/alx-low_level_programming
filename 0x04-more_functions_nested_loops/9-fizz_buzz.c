#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	for (i=1; i<=100; i++)
	{
		/** 
		 * number divisible by 3 and 5 will
		 * be divisible by 15
		 */
		
		if(i % 15 == 0)	
			printf ("FizzBuzz ");
		
		/**
		 * number divisible by 3, print 'Fizz'
		 * in place of the number
		*/
		
		else if ((i%3) == 0)
			printf("Fizz ");				
		
		/**
		 * number divisible by 5, print 'Buzz'
		 * in place of the number
                */
		
		else if ((i%5) == 0)					
			printf("Buzz ");				
	
		/**
		 * else print number
		 */
		else	
			printf("%d\n", i);				

	}

	return (0);
}
