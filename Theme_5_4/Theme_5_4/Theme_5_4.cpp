#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, s, p;
	printf("Введите координаты первой вершины: ");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты второй вершины: ");
	scanf_s("%f%f", &x2, &y2);
	p = (abs(x2 - x1) + abs(y2 - y1)) * 2;
	s = abs(x2 - x1) * abs(y2 - y1);
	printf("Периметр: %f\n", p);
	printf("Площадь: %f\n", s);
}