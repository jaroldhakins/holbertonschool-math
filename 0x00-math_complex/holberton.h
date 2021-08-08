#ifndef COMPLEX
#define COMPLEX
#define PI 3.14159265
#include <stdio.h>
/**
 * struct complex - is a struct
 *
 * @re: Is a variable double.
 * @im: Is a variable double.
 */
typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);

#endif
