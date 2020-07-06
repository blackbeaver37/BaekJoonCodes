#include <iostream>

int n;

void printStar(int num) {
	for (int i = 0; i < num; i++)
		printf("*");
}

void printBlank(int num) {
	for (int i = 0; i < num; i++)
		printf(" ");
}

void print(int star, int blank) {
	printBlank(blank);
	printStar(star);
	printf("*");
	printStar(star);
	printf("\n");
}

int main() {
	scanf("%d", &n);
	int line = 2 * n - 1;
	int star = n - 1;
	int blank = 0;
	bool flag = false;
	for (int i = 0; i < line; i++) {
		print(star, blank);
		if (star == 0)
			flag = true;
		if (flag) {
			star++;
			blank--;
		}
		else {
			star--;
			blank++;
		}
	}
	return 0;
}