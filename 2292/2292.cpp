#include <iostream>

int main() {
	int n, room;
	scanf("%d", &n);

	int size = 1;
	int tmp = 1;
	for (int i = 1; i <= n; i++) {
		if (i > tmp) {
			tmp += 6 * size;
			size++;
		}
	}
	printf("%d", size);
	
	return 0;
}