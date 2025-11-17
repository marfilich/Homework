#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

struct engine {
	char name[50];
	char target_platform[50];
	float stable_fps;
	int physics_support;
	char graphics_quality[10];
	float size_sdk;
	double license_cost;
	char development_difficulties[10];
};

typedef struct engine Engine;
Engine one;

int main()
{
	while (1) {
		setlocale(LC_ALL, "RUS");
		int operation;
		puts("Меню:");
		puts("1. Загрузка данных из файла");
		puts("2. Просмотр всех записей");
		puts("3. Поиск по платформа + физика");
		puts("4. Сортировка данных по квадратному корню из FPS");
		puts("5. Добавление новой записи");
		puts("6. Сохранение данных в файл");
		puts("0. Выход");
		printf("Введите номер операции:");
		scanf("%d", &operation);


		switch (operation)
		{
		case 1:
			puts("---------------------------------");
			puts("Загрузка данных из файла");
			break;
		case 2:
			puts("---------------------------------");
			puts("Просмотр всех записей");
			output_engine();
			break;
		case 3:
			puts("---------------------------------");
			puts("Поиск по платформа + физика");
			break;
		case 4:
			puts("---------------------------------");
			puts("Сортировка данных по квадратному корню из FPS");
			break;
		case 5:
			puts("---------------------------------");
			puts("Добавление новой записи");
			input_engine();
			break;
		case 6:
			puts("---------------------------------");
			puts("Сохранение данных в файл");
			break;
		case 0:
			return 0;
		}
	}
}


int input_engine()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("Введите название:");
	getchar();
	fgets(one.name, sizeof(one.name), stdin);
	one.name[strcspn(one.name, "\n")] = 0;
	puts("Введите целевую платформу:");
	fgets(one.target_platform, sizeof(one.target_platform), stdin);
	one.target_platform[strcspn(one.target_platform, "\n")] = 0;
	puts("Введите стабильный FPS:");
	scanf("%f", &one.stable_fps);
	puts("Поддержка физики (1 - да, 0 - нет):");
	scanf("%d", &one.physics_support);
	getchar();
	puts("Введите качество графики (Низкое/Среднее/Высокое):");
	fgets(one.graphics_quality, sizeof(one.graphics_quality), stdin);
	one.graphics_quality[strcspn(one.graphics_quality, "\n")] = 0;
	puts("Введите размер SDK:");
	scanf("%f", &one.size_sdk);
	puts("Введите стоимость лицензии:");
	scanf("%lf", &one.license_cost);
	getchar();
	puts("Введите сложность разработки (Легкая/Средняя/Сложная):");
	fgets(one.development_difficulties, sizeof(one.development_difficulties), stdin);
	one.development_difficulties[strcspn(one.development_difficulties, "\n")] = 0;
	puts("-----------------------------------------------------------");
}
int output_engine()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Название: %s\n", one.name);
	printf("Целевая платформа: %s\n", one.target_platform);
	printf("Стабильный FPS: %f\n", one.stable_fps);
	printf("Поддержка физики: %s\n", one.physics_support == 1 ? "Да" : "Нет");
	printf("Качество графики: %s\n", one.graphics_quality);
	printf("Размер SDK: %f ГБ\n", one.size_sdk);
	printf("Стоимость лицензии: %lf\n", one.license_cost);
	printf("Сложность разработки: %s\n", one.development_difficulties);
	puts("---------------------------------------------");
	return 0;
}

