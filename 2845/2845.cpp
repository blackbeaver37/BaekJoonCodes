#include <iostream>
int main() {
	int L, P;
	scanf("%d %d", &L, &P);
	int people = L * P;
	for (int i = 0; i < 5; i++) {
		int tmp;
		scanf("%d", &tmp);
		printf("%d ", tmp - people);
	}
	return 0;
}