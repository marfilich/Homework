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