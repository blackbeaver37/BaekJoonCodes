#include <stdio.h>
int main() {
	int n1 = 0;
	int n2 = 0;
	int num[3];
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for (int i = 0; i < 3; i++) {
		if (num[i] > n1) {
			n2 = n1;
			n1 = num[i];
		}
		else if (num[i] > n2)
			n2 = num[i];
	}
	printf("%d", n2);
	return 0;
}