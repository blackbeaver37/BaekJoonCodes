#include <iostream>

#define MAX_NUM 1000

int num[MAX_NUM];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", num + i);

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", num[i]);
	}
}