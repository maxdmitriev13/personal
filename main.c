#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//программа находит корни квадратного уравнения
	system("chcp 65001 > nul");
	int a;
	int b;
	int c;
	int k1;
	int k2;
	printf("Введите числа a, b, c:\n");
	scanf_s("%d", &a, sizeof(a));
	scanf_s("%d", &b, sizeof(b));
	scanf_s("%d", &c, sizeof(c));
	printf("Квадратное уравнение: y = %dx^2 + x%d + %d\n", a, b, c);
	int D = b*b - (4*a*c);
	printf("Дискриминант = %d\n", D);
	if (D < 0 )
		printf("Квадратное уравнение не имеет решения\n");
	if (D == 0) {
		k1 = (-b) / (2*a);
		printf("Квадратное уравнение имеет один корень = %d\n", k1);
	}
	if (D > 0) {
		k1 = ((-b) + sqrt(D)) / (2*a);
		k2 = ((-b) - sqrt(D)) / (2*a);
		printf("Квадратное уравнение имеет два корня = %d и %d\n", k1, k2);
	}
	return 0;
}
