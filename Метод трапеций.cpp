#include "Header.h"
double int1(double E, double n, double a, double b) // Функция, которая считает интеграл трапециями
{
 double x, s;
 double S = 0; // Значение определенного интеграла - площадь под графиком
 double dx = fabs((b - a) / n); // dx - "ширина" шага, то на сколько будем сдвигать x в зависимости от кол-ва разбиений
 while ((a + dx) <= b)
		{
			x = a + dx;
			s = 0.5*(f(a) + f(x))*(x - a); // Считаем площадь под графиком
			a = x;
			S += s;
		}
	
	return S;
}
