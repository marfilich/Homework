//Вариант16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int l_year;
	int days, months;
	puts("Введите число прожитых лет");
	scanf("%d", &l_year);
	months = l_year * 12;
	days = (l_year - l_year / 4) * 365 + l_year / 4 * 366;
	printf("Дано:\nЧисло прожитых лет:%d\nРешение:\nЧисло прожитых месяцев:%d\nЧисло прожитых дней:%d", l_year, months, days);
}