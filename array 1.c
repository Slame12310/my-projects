// задачник Абрамяна. array 1
//Дано целое число N (> 0). Сформировать и вывести целочисленный
//массив размера N, содержащий N первых положительных нечетных чисел:
//1, 3, 5, . . . .

#include <stdio.h>
int main()  {
	int n;
	scanf("%d", &n);
	
	int arr[10];
	int i;
	
	arr[0] = 1;
	for (i = 1; i < n; i = i + 1) {
		arr[i] = arr[i-1] + 2;
	}
	for (i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

