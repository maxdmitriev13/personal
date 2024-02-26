#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	

//банковское округление	
int bankround(double number) {
	int down = floor(number);
	if (number - floor(number) == 0.5 )
		return (down + abs(down%2));
	else 
		return round(number);
}

int main(int argc, char *argv[]) {
	
	double number1 = 1.5, number2 = 2.5;
	int result1 = bankround(number1), result2 = bankround(number2);
	printf("result1 =  %d,result2 = %d\n", result1, result2);
	return 0;
}

