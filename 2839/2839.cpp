#include <iostream>

int main() {
	int n;
	scanf("%d", &n);

	int tmp = n;
	int count = tmp/5;
	tmp -= 5 * count;
	if (tmp % 3 == 0) {
		count += tmp / 3;
	}
	else if (tmp % 3 == 1 && count >= 1) {
		tmp += 5;
		count--;
		count += tmp / 3;
	}
	else if (tmp % 3 == 2 && count >= 2) {
		tmp += 10;
		count -= 2;
		count += tmp / 3;
	}
	else {
		count = -1;
	}

	printf("%d", count);

	return 0;
}