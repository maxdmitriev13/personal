#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
}

double mediana(int n, ...){
	int m[n];
	va_list params;
	va_start(params, n);
	for(int i=0; i < n; i++) 
		m[i] = va_arg(params, int);
	va_end(params);
	
	double med;
	qsort(m, n, sizeof(int),compare_ints);
	if (n % 2 == 1)
		med = m[n/2];
	else
		med = ((m[(n/2) -1] + m[n /2] )/ 2.0);
	return med;
}

int main(int argc, char *argv[]) {
	printf("med(10,11,21,13,24, 25,26,27) = %.2f\n", mediana(8,10,11,21,13,24, 25,26,27));
	return 0;
}
