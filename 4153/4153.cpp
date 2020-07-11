#include <iostream>

void sort(int *a, int *b, int *c) {
	int tmp;
	int n1 = *a;
	int n2 = *b;
	int n3 = *c;
	if (n1 > n2) {
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	if (n2 > n3) {
		tmp = n2;
		n2 = n3;
		n3 = tmp;
	}
	if (n1 > n2) {
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	*a = n1;
	*b = n2;
	*c = n3;
}

int main() {
	int a, b, c;
	while (true) {
		scanf("%d %d %d", &a, &b, &c);
		if (a + b + c == 0) break;
		sort(&a, &b, &c);
		if (a*a + b*b == c*c)
			printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}