#include <iostream>

int main() {
	int N, F;
	scanf("%d\n%d", &N, &F);
	int tmp = N / 100;
	tmp *= 100;
	while (true) {
		if (tmp % F == 0) break;
		tmp++;
	}
	printf("%02d", tmp % 100);
	return 0;
}