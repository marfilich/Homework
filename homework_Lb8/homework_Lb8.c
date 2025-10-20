//Вариант 17
//Контрольный пример x = 2,5  n = 10. Результат работы программы 0,359827
// х = 5,2  n = 5. Результат работы программы 2,143457
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	float x, result;
	result = 0;
	puts("Введите натуральное число n");
	scanf("%d", &n);
	puts("Введите действительное число х");
	scanf("%f", &x);
	for (int i = 1; i <= n; i++) {
		result += sin(pow(x, i));
	}
	puts("Дано:");
	puts("--------------------");
	printf("n = %d\nx = %f\n", n, x);
	puts("--------------------");
	puts("Результат:");
	printf("%f", result);

}

