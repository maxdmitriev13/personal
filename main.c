#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		// введите любое число
	// в ответ "на ветке столько-то ворон"
	system("chcp 65001 > nul");
	char* name;
	int voron;
	printf("Введите любое число ворон:\n");
	scanf_s("%d", &voron, sizeof(voron));
	switch (voron%100)	{
		case 11:
		case 12:
		case 13:
		case 14:
			name = "ворон";
			break;
		default:
			switch (voron%10)	{	
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
		default: 
			name = "вороны";
			break;
		}
		}
		printf("На ветке %d %s", voron, name);
	return 0;
}