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
	int N;
	scanf("%d", &N);
	int count = 0;
	for (int n = 0; n < N; n++) {
		int num;
		scanf("%d", &num);
		if (isPrime(num))
			count++;
	}
	printf("%d", count);

	return 0;
}