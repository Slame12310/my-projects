// задачник Абрамяна array 3
// Дано целое число N (> 1), а также первый член A и разность D арифметической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии:
//A, A + D, A + 2·D, A + 3·D, . . .
#include <stdio.h>
int main()  {
	int n, a, d;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &d);

	
	int arr[10];
	
	for (int i = 0; i < n; i = i + 1){
		arr[i] = a + i * d;
		
	}
	for (int i = 0; i < n; i = i + 1) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
