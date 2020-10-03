#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, s, p;
	printf("Введите стороны прямоугльника через пробел: ");
	scanf_s("%f %f", &a, &b);
	if ((a > 0) && (b > 0)) {  //если длина стороны равна нулю или отрицательна 
								//то найти площадь прямоугольника не получится
		s = a * b;
		p = 2 * (a + b);
		printf("Площадь равна: %f\n", s);
		printf("Периметр равен: %f", p);
	}
	else {
		printf("Ошибка, длины сторон не могут быть отрицательными либо равными нулю");
	}
}
