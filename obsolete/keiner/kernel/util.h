#ifndef UTIL_H
#define UTIL_H

#include <complex.h>

double mysecond();
void myvpr (double* x, int n, char * text);
void myvprc (complex *x, int n, char * text);
int pow2(const int t);
double error_complex_inf(complex *x0, complex *x, int n);
double error_complex_1(complex *a, complex *b, int n);
double error_complex3(complex *a, complex *b, int n);


#endif