#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_rectangle(float a, float b) 
{
	return a * b;
}

void draw_rectangle(int a, int b, char c) 
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
			{
				printf(" %c", c);

			}
			else {
				printf("  ");
			}
		printf("\n");
	}
}


void definition()
{
	puts("Прямоугольник — четырёхугольник, у которого все углы прямые.");
}




int main()
{
	setlocale(LC_ALL, "RUS");
	int operation;
	puts("Выберите операцию\n1 - рассчитать площадь, 2 - вывести определение фигуры, 3 - нарисовать фигуру");
	scanf("%d", &operation);
	switch (operation)
	{
	case 1:
		puts("Вычисление площади:");
		float a, b, s;
		puts("Введите стороны прямоугольника через пробел");
		scanf("%f %f", &a, &b);
		s = area_rectangle(a, b);
		printf("%f", s);
		break;
	case 2:
		puts("Определение фигуры");
		definition();
		break;
	case 3:
		puts("Фигура");
		int w, h;
		char c;
		puts("Введите стороны прямоугольника через пробел");
		scanf("%d %d", &w, &h);
		puts("Введите символ");
		scanf(" %c", &c);
		draw_rectangle(w, h, c);
		break;
	default:
		puts("Неизвестная операция");
		break;
	}
}
