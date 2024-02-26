#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int compareStrings(const void* p1, const void* p2) {
	const char* s1 = (const char* )p1;
	const char* s2 = (const char* )p2;
	printf("compare %s %s\n", *s1, *s2);
	return strcmp(s1, s2);
	
}*/

int main(int argc, char *argv[]) {

	// "Sergey,Andrey,Anna,Elena,Alex,Julia"
	// Разместить имена в алфавитном порядке
	// 1.Сделать массив строк с именами
	// 2.Сортировать массив с помощью (qsort , ф-ция сравнения strcmp
	// 3.Объединить массив строк в одну строку strcat  
	char s[50] = "Sergey,Andrey,Anna,Elena,Alex,Julia";
	char words[10][50];
	int wordCount = 0;
	
	int len = strlen(s);
	for( int i =0; i < len; i++){
		if(isalpha(s[i])) {
			int last = len;
			for( int j = i +1; j < len; j++)
				if (!isalpha(s[j])) {
					last = j;
					break;
				}
				strncpy(words[wordCount], &s[i], last - i);
				words[wordCount][last-i] = '\0';
				wordCount++;
				i = last;
		}
	}
	printf("wordcount: %d\n", wordCount);
	qsort(words, wordCount, 50, strcmp);
	for (int i = 0; i < wordCount; i++)
	printf("'%s'\n",words[i]);
	
	char result[60] = {0};
		for (int i = 0; i < wordCount; i++) {
		strcat(result, words[i]);
		if (i != wordCount-1)
		strcat(result, ",");
		}
		puts(result);
	
	
	return 0;
}
