#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 > arg2) return -1;
    if (arg1 < arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
 
    // return arg1 - arg2; // erroneous shortcut: undefined behavior in case of
                           // integer overflow, such as with INT_MIN here
}

int main(int argc, char *argv[]) {
	//find median value
		#define NSIZE 12
	int n[] = {10, 15, 7, 3, 21, 1000, 18, 30, 14, 17, 20, 33};
	qsort(n, NSIZE, sizeof(int), compare_ints);
	for (int i=0; i < NSIZE; i++)
		printf("%-5d", n[i]);
	puts("");
	
	double median_value;
	if (NSIZE%2 == 1) {
		median_value = n[NSIZE/2];
		}
	else {
		median_value = (n[NSIZE/2] + n[NSIZE/2 -1] ) /2.0;
		}
	printf("%.2f", median_value);
	return 0;
}
