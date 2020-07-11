#include <iostream>
#include <cmath>
#include <cstring>

#define MAX_NUM 123456*2

bool isPrime[MAX_NUM];

void initPrime(int num) {
	memset(isPrime, true, sizeof(isPrime));
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (isPrime[i] == false)
			continue;
		else {
			for (int j = i * i; j <= num; j += i)
				isPrime[j] = false;
		}
	}
}

int main() {
	while (true) {
		int n;
		scanf("%d", &n);
		if (n == 0) break;
		int count = 0;
		initPrime(n * 2);
		for (int i = n + 1; i <= n * 2; i++) {
			if (isPrime[i])
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}