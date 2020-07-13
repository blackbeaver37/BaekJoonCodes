#include <iostream>

int main() {
	int sum=0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		scanf("%d", &tmp);
		sum += tmp * tmp;
	}
	printf("%d", sum % 10);

	return 0;
}