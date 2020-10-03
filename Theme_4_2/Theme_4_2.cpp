#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.14; //объявление константы

int main()
{
	setlocale(LC_ALL, "Russian");
	float d, L;
	printf("Введите диаметр: ");
	scanf_s("%f", &d);
	if (d > 0) {
		L = d * pi;
		printf("Длина окружности: %f", L);
	}
	else {
		printf("Диаметр не может быть отрицательным или равным нулю");
	}
}
