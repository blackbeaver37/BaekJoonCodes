#include <iostream>

int combination(int n, int m) {
	int ret = 1;
	int count = 0;
	while (count != n) {
		ret *= m - count++;
		ret /= count;
	}

	return ret;
}

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int N, M;
		scanf("%d %d", &N, &M);
		printf("%d\n", combination(N, M));
	}

	return 0;
}