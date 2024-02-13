#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("chcp 65001 > nul"); //utf-8
	printf("Введите температуру в градусах Цельсия: ");
	double temp_c;
	scanf("%lf", &temp_c);
	double temp_f = temp_c * 1.8 + 32;
	printf("Температура в градусах Фарингейта: %.3lf", temp_f);	
	return 0;
}