#include <stdio.h>
int main() {
	int x, y, quad = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x * y > 0) {
		if (x > 0)
			quad = 1;
		else
			quad = 3;
	}
	else {
		if (x > 0)
			quad = 4;
		else
			quad = 2;
	}
	printf("%d", quad);
	return 0;
}