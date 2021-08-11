#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	complex c;

	c.re = 1;
	c.im = 2;
	display_complex_number(c);
	c.re = 1;
	c.im = 0;
	display_complex_number(c);
	return (0);
	
}
