#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * substraction - performs the substraction operation to complex numbers.
 * @c1: complex number one
 * @c2: complex number two
 * @c3: complex number three
 * Return: nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
