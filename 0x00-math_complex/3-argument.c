#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * argument - returna el argumento del numero comlejo
 * @c: complex
 * Return: a double
 **/
double argument(complex c)
{
	double b, teta;

	b = c.im / c.re;

	teta = atan(b);

	if (c.im > 0 && c.re > 0)
	{
		return (teta);
	}
	else if (c.im > 0 && c.re < 0)
	{
		return (PI - teta);
	}
	else if (c.im < 0 && c.re < 0)
	{
		return ((-1) * (PI - teta));
	}
	else if (c.im < 0 && c.re > 0)
	{
		return ((-1) * teta);
	}
	return (0.0);
}
