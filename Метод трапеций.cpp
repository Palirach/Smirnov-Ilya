#include "Header.h"
double int1(double E, double n, double a, double b) // Интеграл трапециями
{
 double x, s;
 double S = 0; // Площадь под графиком
 double dx = fabs((b - a) / n); // dx - "ширина" разбиений, на которую сдвигаем х
 while ((a + dx) <= b)
		{
			x = a + dx;
			s = 0.5*(f(a) + f(x))*(x - a);
			a = x;
			S += s;
		}
	
	return S;
}
