#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 * division - performs the division operation to complex numbers.
 * @c1: complex number one
 * @c2: complex number two
 * @c3: result of the divsion
 * Return: nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	double  mulre, mulim,  potre, potim, pot;

	mulre = (c1.re * c2.re) + (c1.im * c2.im);
	potre = c2.re * c2.re;
	potim = c2.im * c2.im;
	pot = potre + potim;
	c3->re = mulre / pot;
	mulim = (c1.re * c2.im * -1) + (c1.im * c2.re);
	c3->im = mulim / pot;
}
