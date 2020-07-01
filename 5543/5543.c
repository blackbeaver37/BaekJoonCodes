#include <stdio.h>
int main() {
	int p1 = 2000;
	int p2 = 2000;
	int tmp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &tmp);
		if (p1 > tmp)
			p1 = tmp;
	}
	for (int i = 0; i < 2; i++) {
		scanf("%d", &tmp);
		if (p2 > tmp)
			p2 = tmp;
	}
	printf("%d", p1 + p2 - 50);
	return 0;
}