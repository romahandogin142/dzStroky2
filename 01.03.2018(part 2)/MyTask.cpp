#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "Prototip.h"


unsigned short int nz;
#define Size 20

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		printf("Введите номер задания, 999 - для выхода : ");
		scanf("%d", &nz);

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/*Даны две фамилии. Определить, какая из них длиннее*/
			system("cls");
			printf("1. Даны две фамилии. Определить, какая из них длиннее\n");
			char fName1[Size], fName2[Size];
			for (i = 1; i <= 2; i++)
			{
				printf("Введите %d фамилию: ", i);
				if (i == 1)
					scanf("%s", fName1);
				else
					scanf("%s", fName2);
			}
			if (strlen(fName1) > strlen(fName2))
				printf("1 фамилия длинее второй\n");
			else
				printf("2 фамилия длинее первой\n");
		}

		else if (nz == 2)
		{
			/*Даны названия трех городов. Вывести на экран самое длинное и самое короткое название*/
			system("cls");
			printf("2. Даны названия трех городов. Вывести на экран самое длинное и самое короткое название\n");
			char city1[Size], city2[Size], city3[Size];
			int min, max;
			for (i = 1; i <= 3; i++)
			{
				printf("Введите название %d-го города : ", i);
				if (i == 1)
					scanf("%s", city1);
				else if (i == 2)
					scanf("%s", city2);
				else
					scanf("%s", city3);
			}

			MinMax(city1, city2, city3);
		}

		else if (nz == 3)
		{
			/*Дано слово. Вывести на экран его третий символ*/
			system("cls");
			printf("3. Дано слово. Вывести на экран его третий символ\n");
			char slovo[Size];
			printf("Введите слово: ");
			scanf("%s", slovo);
			printf("Третий символ этого слова - %c\n", slovo[2]);
		}

		else if (nz == 4)
		{
			/*Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'*/
			system("cls");
			printf("4. Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'\n");
			char mas[11] = "1faf4a6f14";
			printf("Массив - %s\n", mas);
			for (int i = 0; i < 11; i++)
			{
				int code = (int)mas[i];
				if (code >= 48 && code <= 57)
					mas[i] = '!';
			}
			printf("	 %s\n", mas);
		}

		else if (nz == 5)
		{
			/*Дана размером 11. Сколько раз среди данных символов встречаются символы +, -, *.*/
			system("cls");
			printf("5. Дана размером 11.Сколько раз среди данных символов встречаются символы +, -, *.\n");
			char sim[12] = { '*','-','*' ,'-' ,'*' ,'-', '+','-','+' ,'+' ,'-' ,'*' };
			int count1=0, count2=0, count3=0;
			for (int i = 0; i < 12; i++)
			{
				if (sim[i] == '+')
					count1++;
				if (sim[i] == '-')
					count2++;
				if (sim[i] == '*')
					count3++;
			}
			printf("%d символа - \"+\"\n%d символа - \"-\"\n%d символа - \"*\"\n", count1, count2, count3);
		}

		else if (nz == 6)
		{
			/*Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.*/
			system("cls");
			printf("6. Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.\n");
			char mas[16]="распространение";
			int count=0;
			for (int i = 0; i < 16; i++)
			{
				int code = (int)mas[i];
				if (code >= 65 && code <= 90)
					count++;
			}
			printf("%d\n", count);
			/*Почему то не хочет работать с таблицей адских кодов, он даже не выводит мне их*/
		}

		else
		{
			printf("Такого задания не существует !!! \n");
		}
	}
}