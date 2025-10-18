//Вариант  17
//Контрольный пример: если х = 3,5; у = 6  точка не принадлежит заданной области
// х = 4,5; у = -2,5 точка принадлежит заданной области
// x = 2; y = 5 точка не принадлежит заданной области
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	const float X_MIN = 2;
	const float X_MAX = 6;
	const float Y_MIN = -5.5;
	const float Y_MAX = 5.5;

	float x, y;
	puts("Введите координаты x");
	scanf("%f", &x);
	puts("Введите координаты y");
	scanf("%f", &y);
	
	if ((x > X_MIN && x < X_MAX) && (y > Y_MIN && y < Y_MAX))
	{
		printf("Точка (%.3f, %.3f) принадлежит заданной области.", x, y);
	}
	else
		printf("Точка (%.3f, %.3f) не принадлежит заданной области", x, y);
}
