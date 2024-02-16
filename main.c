#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("chcp 65001 > nul");
	//найти НОД двух чисел
	int a, b;
	printf("Введите числа a, b: \n");
	scanf("%d %d", &a, &b);
	int x = 1;
	while (x != 0)	{
		x = a % b;
		if (x == 0) {
		printf("b = %d\n", b);
		return 0;
		}
		a = b;
		b = x;
		
	}
	
}
