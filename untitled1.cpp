#include <stdio.h>

int main(void) {
	int n, x, max;
	scanf("%d", &n);
	scanf("%d", &x);
	max = x;
	int i = 1;
	while (i < n) {
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
		i = i + 1;
	}
	printf("%d", max);
	return 0;
}
