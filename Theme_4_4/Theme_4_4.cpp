#include <stdio.h>
#include <math.h> 
#include <locale.h> 

int main() {
	float a, b, c; 
	setlocale(LC_ALL, "Russian"); 
	printf("Введите числа: ");
	scanf_s("%f%f", &a, &b);
	a = a * a;
	b = b * b;
	c = a + b;
	printf("Сумма: %f\n", c);
	c = a - b;
	printf("Разность: %f\n", c);
	c = a * b;
	printf("Произведение: %f\n", c);
	c = a / b;
	printf("Частное: %f\n", c);
}
