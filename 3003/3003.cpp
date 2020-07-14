#include <iostream>
int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	for (int i = 0; i < 6; i++) {
		int tmp;
		scanf("%d", &tmp);
		printf("%d ", chess[i] - tmp);
	}
	return 0;
}