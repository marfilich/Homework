#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define x -2.235e-2
#define y 2.23
#define z 15.221
double main()
{
	setlocale(LC_ALL, "RUS");
	double w;
	double res1, res2, res3;
	res1 = pow((pow(x, 6.) + pow(log(y), 2)), 1/3.f);
	res2 = exp(fabs(x - y)) * pow(fabs(x - y), fabs(x + y));
	res3 = atan(x) + atan(z);
	w = res1 + res2 / res3;
	printf("%.3f", w);
}
