#ifndef COMPLEX
#define COMPLEX
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

#endif
