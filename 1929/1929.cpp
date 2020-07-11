#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
#define MAX_NUM 1000000

int main() {
	int M, N;
	scanf("%d %d", &M, &N);
	bool prime[MAX_NUM];
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == false)
			continue;
		else {
			for (int j = i * i; j <= N; j += i)
				prime[j] = false;
		}
	}
	for (int i = M; i <= N; i++) {
		if (prime[i])
			printf("%d\n", i);
	}
	
	return 0;
}