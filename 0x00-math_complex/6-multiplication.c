#include <math.h>
#include <stdio.h>
#include "holberton.h"
/**
 * multiplication - performs the multiplication operation to complex numbers.
 * @c1: complex number 1
 * @c2: complex number 2
 * @c3: complex number 3
 * Return: nothing
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + (c1.im * c2.im * -1);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
