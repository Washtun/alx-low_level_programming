#include "main.h"
#include <stdio.h>


/**Function that prints the numbers
 * from 0 to 9,but skips 2 and 4
 */


void print_numbers(void)
{
        int i;

        for (i = 48; i < 58; i++)
	{	
		if ((i == '2') || (i == '4'))
			continue;
                
		else
			_putchar('i');
	}

        _putchar('\n');

}
