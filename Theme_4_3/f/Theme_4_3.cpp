#include <stdio.h> 
#include <math.h>  
#include <locale.h> 

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c; 
	printf("Введите числа: ");
	scanf_s("%f%f", &a, &b);
	c = (a + b) / 2;
	printf("Среднее арифметическое: %f", c);
}