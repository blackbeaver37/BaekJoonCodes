#include <iostream>
#include <algorithm>

int num[10];

int main() {
	int N;
	scanf("%d", &N);
	int tmp = N;
	int length = 0;
	while (tmp != 0) {
		num[length++] = tmp % 10;
		tmp /= 10;
	}
	std::sort(num, num + length);
	for (int i = length-1; i >= 0; i--)
		printf("%d", num[i]);

	return 0;
}