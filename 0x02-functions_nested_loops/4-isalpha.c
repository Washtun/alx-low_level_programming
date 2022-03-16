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

int _isalpha(int c)
{
        int c;

        for (c = 32; c < 126; c++)
        {
                if (((char)c >= 'a' || (char)c >= 'A') && ((char)c <= 'z' || (char)c <= 'Z'))
                {

                        return (1);
                }

                else
                {

                        return (0);
                }

        }


                _putchar('\n');



        return (0);
}

