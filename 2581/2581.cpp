#include <iostream>

bool isPrime(int num) {
	bool ret = true;
	if (num == 1)
		ret = false;
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0)
				ret = false;
		}
	}
	return ret;
}

int main() {
	int M, N;
	scanf("%d\n%d", &M, &N);
	int min=0, sum = 0;
	for (int i = M; i <= N; i++) {
		if (isPrime(i)) {
			sum += i;
			if (min == 0)
				min = i;
		}
	}
	if (sum + min == 0) printf("-1");
	else printf("%d\n%d", sum, min);

	return 0;
}