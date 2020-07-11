#include <iostream>
#include <cmath>
#include <cstring>

#define MAX_NUM 10000

bool isPrime[MAX_NUM+1];

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
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int n, gNum = 0;
		scanf("%d", &n);
		initPrime(n);
		for (int i = 2; i <= n/2; i++) {
			if (isPrime[i] && isPrime[n - i]) {
				gNum = i;
			}
		}
		printf("%d %d\n", gNum, n - gNum);
	}

	return 0;
}