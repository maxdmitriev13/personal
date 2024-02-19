#include <stdio.h>
#include <stdlib.h>
#include "file.h"
//#define DL_OK(r) (2*PI*(r))
//#define PL_OK(r) (PI*((r)*(r)))

int main(int argc, char *argv[]) {
	
	
	/* 
1.Определить константу PI через макрос
2.Определить макрофункцию для нахождения длины окружности по радиусу = 2*pi*r
3.Определить макрофунцию для нахождения площади круга по радиусу pi*r^2
4.Перенести созданные макросы в отдельный заголовочный файл, оформив его правильно.

*/
	system("chcp 65001 > nul");
	double r = 10;
	double dl = DL_OK(r);
	double pl = PL_OK(r);
	printf("Длина окружности = %.2f. Площадь круга = %.2f.", dl, pl);

	return 0;
}
