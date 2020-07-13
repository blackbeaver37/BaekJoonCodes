#include <iostream>

int num[5];

int main() {
	int n;
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		int index = 0;
		while (n != 0) {
			num[index++] = n%10;
			n /= 10;
		}
		bool check = true;
		for (int i = 0; i < index/2; i++) {
			if (num[i] != num[index - i - 1]) {
				check = false;
				break;
			}
		}
		if (check) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}