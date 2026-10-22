//задачник Абрамяна. array 2
// Дано целое число N (> 0). Сформировать и вывести целочисленный
//массив размера N, содержащий степени двойки от первой до N-й: 2, 4,
//8, 16, . . . 
#include <stdio.h>
int main()  {
	int n;
	scanf("%d", &n);
	
	int arr[10];
	int stepen = 2;
	
	for (int i = 0; i < n; i = i + 1) {
		arr[i] =stepen;
		stepen = stepen * 2;
	}
	for (int i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
	
	
	
}
