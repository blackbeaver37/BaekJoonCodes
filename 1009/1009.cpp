#include <iostream>
#include <cmath>

int main() {
	int T, num[4];
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int a, b;
		scanf("%d %d", &a, &b);
		num[0] = a%10;
		num[1] = a*a%10;
		num[2] = a*a*a%10;
		num[3] = a*a*a*a%10;
		if (num[(b + 3) % 4] == 0)
			printf("10\n");
		else printf("%d\n", num[(b + 3) % 4]);
	}

	return 0;
}