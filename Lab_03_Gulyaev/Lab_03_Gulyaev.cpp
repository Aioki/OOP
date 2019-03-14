#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <iostream>
#include "testing.h"

int main()
{
	int a[20]; // Заданный массив
	int M; //Максимальный размер массива
	int max1, max2 = 1001; //Максимальное и предмаксимальное значение 


	input_printf("input the size of the array ");
	scanf("%d", &M); // ввод размера массива
	if (M < 2 || M>20) //проверка размера массива
	{
		error_printf("wrong input numbers");
		return 0;
	}

	printf("input elements of the array A ");
	for (int i = 0; i < M; i++) //цикл ввода массива
	{
		scanf("%d", &a[i]); //чтение элементов массива
		if (a[i] > 1000 || a[i] < -1000) //проверка элементов массива
		{
			error_printf("wrong elements of the array");
			return 0;
		}
	}

	//цикл поиска наибольшего элемента

	max1 = a[0];
	for (int i = 1; i < M; i++) {
		if (a[i] > max1) {

			max2 = max1;
			max1 = a[i];

		}
	}

	if (max2 == 1001) { //Проверка на поиск второго наибольшего элемента, если переменная не изменилось - такого числа нет.
		error_printf("No solution");
		return 0;
	}
	else {
		printf("%d", max2);
	}
}
