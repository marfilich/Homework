#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int river_bonfire, river_human, human_bonfire;
	int min_distance;
	puts("������� ����������: �� ���� �� ��������");
	scanf("%d", &river_human);
	puts("������� ����������: �� ���� �� ������");
	scanf("%d", &river_bonfire);
	puts("������� ����������: �� �������� �� ������");
	scanf("%d", &human_bonfire);
	min_distance = sqrt(pow(human_bonfire, 2) + pow(river_bonfire + river_human, 2));
	printf("����������� ���������� ����� %d", min_distance);
}