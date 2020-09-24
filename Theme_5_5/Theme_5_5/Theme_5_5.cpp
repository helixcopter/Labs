#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, x3, y3, p, s, ab, bc, ca;
	printf("Введите координаты первой вершины: ");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты второй вершины: ");
	scanf_s("%f%f", &x2, &y2);
	printf("Введите координаты третьей вершины: ");
	scanf_s("%f%f", &x3, &y3);
	ab = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	bc = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	ca = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
	p = ab + bc + ca;
	printf("Периметр: %f", p);
	p = p / 2;
	s = sqrt(p*(p - ab)*(p - bc)*(p - ca));
	printf("Площадь: %f", s);
}