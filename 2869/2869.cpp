#include <iostream>

int A, B, V;

int main() {
	scanf("%d %d %d", &A, &B, &V);

	int v = V - A;
	int day = v / (A - B) + 1;
	if (v % (A - B) != 0)
		day++;

	printf("%d", day);
	return 0;
}