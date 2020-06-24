#include <stdio.h>
int main() {
	int num, count = 0;
	scanf("%d", &num);
	int n1 = num / 10;
	int n2 = num % 10;
	do {
		int tmp = n2;
		n2 = (n1 + n2) % 10;
		n1 = tmp;
		count++;
	} while (n1 * 10 + n2 != num);
	printf("%d", count);
	return 0;
}