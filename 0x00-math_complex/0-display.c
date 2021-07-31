#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - prints complex numbers
 *
 * @c: structur  complex
 *
 * Return: no return
 **/
void display_complex_number(complex c)
{
		if (c.im > 1)
		{
			printf("%.0f + %.0fi\n", c.re, c.im);
			
		}
		if (c.im == 0)
		{
			printf("%.0f\n", c.re);
			
		}
		if (c.re == 0)
		{
			printf("%.0fi\n", c.im);
			
		}
		if (c.im == 1)
		{
			printf("%.0f + i\n", c.re);
			
		}
		if (c.im == -1)
		{
			printf("%.0f - i\n", c.re);
			
		}
		if(c.im < -1)
		{
			printf("%.0f - %.0fi\n", c.re, (-c.im));
			
		}
}
