#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: first variable
 *
 * @b: second variable
 *
 */

void swap_int(int *a, int *b)
{
	int j;

j = *a;
*a = *b;
*b = j;
}
