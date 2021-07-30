#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - prints complex numbers
 *
 * @c: complex
 *
 * Return: no return
 **/
void display_complex_number(complex c)
{
	if (c.im == 0)
	{
		printf("%.f\n", c.re);
	}
	else if (c.im <= 1)
	{
		c.im = c.im * -1;
		printf("%.f - %fi\n", c.re, c.im);
	}
	else
	{
		printf("%.f + %.fi\n", c.re, c.im);
	}
}
