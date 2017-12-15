#include "Header.h"
double int2(double E, double n, double a, double b) // Функция интеграла методом верхних прямоугольников
{
	double x, s;
	double S = 0; // Площадь под графиком
	double dx = fabs((b - a) / n); // dx - "ширина" разбиений, на которую сдвигаем х
	while ((a + dx) <= b)
	{
		x = a + dx;
		if (f(a) > f(x))
		{
			s = f(a)*(x - a);
		}
		if (f(a) <= f(x))
		{
			s = f(x)*(x - a);
		}
		a = x;
		S += s;
	}
	return S;
}