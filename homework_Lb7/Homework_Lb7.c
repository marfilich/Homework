#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("������� ����� �� 0 �� 9.\n");
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
			printf("������ ����� %c\n", number);
			break;
		default:
			printf("������ �� �����\n");
			break;
		}
	}
	return 0;
}