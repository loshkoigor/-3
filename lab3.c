#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
//Дюймы
#define D 2.54
#define I  2.32166
#define S 2,7076
//Мили
#define MOR 1,852
#define SUH 1,609
#define RIM 1475
#define STA 7,468
#define GEO 7412,6


int task1()
{
	int num, num2; //0
	puts("Введите число "); //1
	scanf("%d", &num); //2
	printf("Введено число %d, введите второе число ", num); //3
	scanf("%d", &num2); //4
	printf("Сумм = %d, разность = %d, произведение = %d, частное и остаток от деления воторого числа на первое = %d и %d", num + num2, num - num2, num * num2, num2 / num, num2 % num); //5
	getchar();

	return 0;
}

int task2()
{
	int dym;
	float result;

	printf("Введите число ");
	scanf("%d", &dym);

	result = D * dym;

	printf("%d английских дюймов - это %.2f см\n", dym, result);
	printf("%d испанских дюймов - это %.2f см", dym, dym * I);
	printf("%d старолитовских дюймов - это %.2f см", dym, dym * S);
	printf("%d морских миль - это %.2f см", dym, dym * MOR);
	printf("%d сухопутных миль - это %.2f см", dym, dym * SUH);
	printf("%d римских миль - это %.2f см", dym, dym * RIM);
	printf("%d старорусских миль - это %.2f см", dym, dym * STA);
	printf("%d географических миль - это %.2f см", dym, dym * GEO);

	return 0;
}

int task3()
{
	int a, b;
	
	printf("Введите два числа ");
	scanf("%d %d", &a, &b);
	printf("_________________________\n");
	printf("| a * b | a + b | a - b |\n");
	printf("_________________________\n");
	printf("|%-3d*%-3d|%-3d+%-3d|%-3d-%-3d|\n", a, b, a, b, a, b);
	printf("_________________________\n");
	printf("|%-7d|%-7d|%-7d|\n", a * b, a + b, a - b);

	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	task3();

	return 0;
}