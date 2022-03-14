#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
<<<<<<< HEAD

					putchar(n);

					putchar(m);

					putchar(l);
				if (n != 55 || m != 56)

					{
					putchar(',');

=======
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
					putchar(',');
>>>>>>> 78d14ffc125a7ccba7e40d313197e71ee7c330f1
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
