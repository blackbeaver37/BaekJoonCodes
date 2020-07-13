#include <iostream>

int factorial(int num) {
	int ret = 1;
	int tmp = num;
	for (int i = 1; i <= num; i++) {
		ret *= i;
	}

	return ret;
}

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	int ans = factorial(N) / (factorial(K) * factorial(N - K));
	printf("%d", ans);

	return 0;
}