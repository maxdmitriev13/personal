#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("chcp 65001 > nul");
	//Просим ввести имя, если имя есть, то:
	//Hello, Name!
	//Если пустое имя, то:
	//Hello, Stranger!
	char name[31];
	printf("Введите Ваше имя: ");
	//scanf_s("%s", name, sizeof(name));
	gets(name);
	if (strlen(name) == 0)
		printf("Hello, Stranger!");
	else
		printf("Hello, %s!\n", name);

	return 0;
}