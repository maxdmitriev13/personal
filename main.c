#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//программа находит корни квадратного уравнения
	system("chcp 65001 > nul");
	double a, b, c, k1, k2, D ;
	printf("Введите числа a, b, c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("Квадратное уравнение: y = %.2lfx^2 + %.2lfx + %.2f\n", a, b, c);
	D = (b*b) - (4*a*c);
	printf("Дискриминант = %.2lf\n", D);
	if (D < 0.0 )
		printf("Квадратное уравнение не имеет решения\n");
	if (D == 0.0) {
		k1 = (-b) / (2*a);
		printf("Квадратное уравнение имеет один корень = %.2lf\n", k1);
	}
	if (D > 0.0) {
		k1 = ((-b) + sqrt(D)) / (2*a);
		k2 = ((-b) - sqrt(D)) / (2*a);
		printf("Квадратное уравнение имеет два корня = %.2lf и %.2lf\n", k1, k2);
	}
	return 0;
}
