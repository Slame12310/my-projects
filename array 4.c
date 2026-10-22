//задачник Абрамяна. array 4
// Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N,
//содержащий N первых членов данной прогрессии:
//A, A·D, A·D2, A·D3, ...

#include <stdio.h>
int main()  {
	int n, a, d;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &d);
	int arr[10];
	int i;
	
	arr[0] = a;
	for (i = 1; i < n; i = i + 1) {
		arr[i] = arr[i-1] * d;
	}
	for (i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
