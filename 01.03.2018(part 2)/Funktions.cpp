#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

void MinMax(char *city1, char *city2, char *city3)
{
	if ((strlen(city1) > strlen(city2)) && (strlen(city1) > strlen(city3)))
		printf("����� ������� �������� - %s\n", city1);
	if ((strlen(city2) > strlen(city1)) && (strlen(city2) > strlen(city3)))
		printf("����� ������� �������� - %s\n", city2);
	if ((strlen(city3) > strlen(city2)) && (strlen(city3) > strlen(city1)))
		printf("����� ������� �������� - %s\n", city3);
	if ((strlen(city1) < strlen(city2)) && (strlen(city1) < strlen(city3)))
		printf("����� �������� �������� - %s\n", city1);
	if ((strlen(city2) < strlen(city1)) && (strlen(city2) < strlen(city3)))
		printf("����� �������� �������� - %s\n", city2);
	if ((strlen(city3) < strlen(city1)) && (strlen(city3) < strlen(city2)))
		printf("����� �������� �������� - %s\n", city3);
}
