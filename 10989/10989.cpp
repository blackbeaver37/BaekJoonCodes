#include <iostream>
#include <cstring>
#include <vector>

#define MAX_VAL 10000

int count[MAX_VAL + 1] = {0, };

int main() {
	int N;
	scanf("%d", &N);
	int max = 0;
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		count[tmp]++;
		if (tmp > max)
			max = tmp;
	}
	for (int i = 0; i <= max; i++) {
		for (int j = 0; j < count[i]; j++)
			printf("%d\n", i);
	}

	return 0;
}