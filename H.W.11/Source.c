#define MAX_SIZE 100
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fill_array(int array[], int n);
int sum_abs(int array[], int n);

int main() {
	setlocale(LC_CTYPE, "RUS");

	int n;
	int array[MAX_SIZE];

	printf("Введите размер массива (до 100 элементов): ");
	scanf("%d", &n);
	printf("\n");

	fill_array(array, n);
	printf("Сумма модулей элементов массива, расположенных после первого отрицательного элемента: %d", sum_abs(array, n));

	return 0;
}

void fill_array(int array[], int n) {

	for (int i = 0; i < n; i++) {
		int inp;

		printf("Введите %d элемент: ", i + 1);
		scanf("%d", &inp);
		printf("\n");

		array[i] = inp;
	}
}

int sum_abs(int array[], int n) {
	int flag = 0;
	int res = 0;

	for (int i = 0; i < n; i++) {

		if (flag == 1) res += abs(array[i]); 
		else if (array[i] < 0)  flag = 1; 

	}

	return res;
}