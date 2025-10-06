#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int a, b, c;
	setlocale(LC_ALL, "RUS");
	puts("Введите параметр кислотности почвы A");
	scanf("%d", &a);
	puts("Введите параметр кислотности почвы B");
	scanf("%d", &b);
	puts("Введите параметр кислотности почвы C");
	scanf("%d", &c);
	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		printf("Лунка идеальная для посадки");
	else
		printf("Лунка неидеальная для посадки");
}