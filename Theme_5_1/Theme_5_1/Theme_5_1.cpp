#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, c;
	printf("Введите координаты первой точки: ");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты второй точки: ");
	scanf_s("%f%f", &x2, &y2);
	c = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("Расстояние между точками: %f", c);
}
