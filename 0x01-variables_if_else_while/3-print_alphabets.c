#include <stdio.h>

/**
* main - Printing the alphabet in lowercase, and then in Uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)

{

	int c;



	for (c = 'a'; c <= 'z'; c++)

		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)

		putchar(c);

	putchar('\n');

	return (0);

}
