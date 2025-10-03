//Вариант 16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int river_bonfire, river_human, human_bonfire;
	int min_distance;
	puts("Введите расстояние: от реки до человека");
	scanf("%d", &river_human);
	puts("Введите расстояния: от реки до костра");
	scanf("%d", &river_bonfire);
	puts("Введите расстояние: от человека до костра");
	scanf("%d", &human_bonfire);
	min_distance = sqrt(pow(human_bonfire, 2) + pow(river_bonfire + river_human, 2));
	printf("Дано:\nРасстояние от реки до человека - %d\nРасстояния от реки до костра - %d\nРасстояние от человека до костра - %d\nРешение:\nМинимальное расстояние равно %d", river_human, river_bonfire, human_bonfire, min_distance);
}