#include <math.h>
#include "holberton.h"
/**
 * complex_from_mod_arg - Update all parts of a complex number.
 *
 * Return: Always void.
 * @m: module
 * @arg: argument
 * @c3: pointer
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->im = m * sin(arg);
	c3->re = m * cos(arg);
}
