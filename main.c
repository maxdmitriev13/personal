#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	#define NSIZE 8
	int n[] = {10, 15, 7, 3, 21, 18, 30, 14};
	//find max
	int max = n[0];
	for (int i=1; i < NSIZE; i++)
		if (n[i] > max)
			max = n[i];
	printf("max: %d\n",max);
	return 0;
}
