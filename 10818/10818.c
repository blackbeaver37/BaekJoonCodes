#include <stdio.h>
int main() {
	int n, max=-1000000, min=1000000, num[1000000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", num + i);
		if (num[i] > max)
			max = num[i];
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("%d %d", min, max);
	return 0;
}