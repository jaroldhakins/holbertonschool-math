#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * modulus - calcula el modulo de un numero complejo
 * @c: complex
 * Return: double
 **/
double modulus(complex c)
{
	double a, b, x, y = 2.0, m;

	a = pow(c.re, y);
	b = pow(c.im, y);
	x = a + b;

	m = sqrt(x);
	return (m);
}
