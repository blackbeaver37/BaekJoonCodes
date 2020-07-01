#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, score[1000];
		int sum = 0;
		double avg;
		int count = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", score + j);
			sum += score[j];
		}
		avg = (double)sum / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg)
				count++;
		}
		printf("%.3f%%\n", (double)count / n * 100);
	}
}