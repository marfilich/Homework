//������� 17
//����������� ������ x = 2,5  n = 10. ��������� ������ ��������� 1,481702
// � = 0,8  n = 20. ��������� ������ ��������� 2,53472
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	const float PI = 3.14;
	setlocale(LC_ALL, "RUS");
	int n;
	float x, result;
	result = 0;
	puts("������� ����������� ����� n");
	scanf("%d", &n);
	puts("������� �������������� ����� �");
	scanf("%f", &x);
	for (int i = 1; i <= n; i++) {
		result += pow(sin(x), i);
		printf("%f\n", result);
	}
	printf("%f", result);
}