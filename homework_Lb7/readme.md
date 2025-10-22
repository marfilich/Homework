# Домашнее задание к работе 7

## Условие задачи
Напишите программу, которая определяет какая цифровая клавиша была нажата. Для ввода используйте **getch()**, объявленный в **conio.h**.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Ввести цикл:
   - `while (1)`
3. Организовать ввод данных с помощью getch():
   - `char number` = `getch()`
4. Использовать конструкцию switch
   - `switch (number)`
6. Вывести результат.
7. **Конец**

### Блок-схема
![Блок-схема алгоритма](https://github.com/marfilich/Homework/blob/main/homework_Lb7/лабораторная7.png?raw=true) 

## 2. Реализация программы
```C
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Нажмите цифру от 0 до 9.\n");
	while (1)
	{
		char number = getch();
		switch (number)
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			printf("Нажата цифра %c\n", number);
			break;
		default:
			printf("Нажата не цифра\n");
			break;
		}
	}
	return 0;
}
```

## 3. Результаты работы программы
```
Нажмите цифру от 0 до 9.
Нажата цифра 2
```
## 4. Информация о разработчике

Филичкина Мария бТИИ-251
