#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
	return 0;
}