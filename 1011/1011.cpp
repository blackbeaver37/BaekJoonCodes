#include <iostream>
int flyToAC(int x, int y) {
	int count = 0;
	int d = y - x;
	int tmp = 2;
	while (d > tmp) {
		d -= tmp;
		tmp += 2;
	}
	if (2 * d > tmp) count = tmp;
	else count = tmp - 1;

	return count;
}

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", flyToAC(x, y));
	}
	
	return 0;
}