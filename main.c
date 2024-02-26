#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//функция округляет число до указанного знака после запятой
//round2(double, int)
//round2(1.534, 2) = 1.53
double round2(double number, int num) {
    double factor = pow(10, num);
    return round(number * factor) / factor;
}
