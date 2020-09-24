#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, ac, bc, sum;
	printf("Введите координаты точек: ");
	scanf_s("%f%f%f", &a, &b, &c);
	ac = abs(a - c);
	bc = abs(b - c);
	sum = ac + bc;
	printf("Длина AC: %f\n", ac);
	printf("Длина BC: %f\n", bc);
	printf("Сумма: %f\n", sum);
}
