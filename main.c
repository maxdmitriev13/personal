#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;

}

int main(int argc, char *argv[]) {
	#define NSIZE 10
	int n[] = {18, 15, 17, 3, 21, 1000, 18, 30, 15, 17};
	qsort(n, NSIZE, sizeof(int), compare_ints);
		//print array
	for (int i=0; i < NSIZE; i++)
		printf("%-4d", n[i]);
	puts("");
	int count_v;
	for (int i=0; i < NSIZE-1; i++)
		if (n[i] == n[i+1]) {
		count_v++;
		}
	int uniq = NSIZE - count_v;
	printf("Uniq elements : %d", uniq);
	return 0;
}
