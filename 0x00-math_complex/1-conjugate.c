#include <stdio.h>
#include "holberton.h"
/**
 * conjugate - conjuga
 * @c: struct
 * Return: complex
 **/
complex conjugate(complex c)
{
       	c.im = c.im *-1;
	c.re = c.re;
	return (c);
}
