#include <stdio.h>
int main() {
	int a, b, b1, b10, b100;
	scanf("%d", &a);
	scanf("%d", &b);
	b100 = b / 100;
	b10 = (b - b100 * 100) / 10;
	b1 = b - b100*100 - b10*10;
	printf("%d\n%d\n%d\n%d", a * b1, a * b10, a * b100, a * b);
	return 0;
}