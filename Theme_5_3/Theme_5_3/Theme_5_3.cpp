#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c, ac, bc, sum;
	printf("Введите координаты точек (a,b,c): ");
	scanf_s("%f%f%f", &a, &b, &c);
	if ((c > b) || (c < a)) {
		printf("Ошиюка - С находится не между А и В");
	}
	else {
		ac = abs(a - c);
		bc = abs(b - c);
		sum = ac * bc;
		printf("Произведение: %f\n", sum);
	}
}