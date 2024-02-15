#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// введите число от 0 до 9
	// в ответ "на ветке столько-то ворон"
	system("chcp 65001 > nul");
	char* name;
	int voron;
	printf("Введите число от 0 до 9:\n");
	scanf_s("%d", &voron, sizeof(voron));
	switch (voron) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:	
			name = "ворон";
			break;
		case 1:
			name = "ворона";
			break;
		case 2: 
		case 3:
		case 4: 
			name = "вороны";
			break;
		default:
			puts("Введено неверное количество ворон");
		}
		printf("На ветке %d %s", voron, name);
	return 0;
}