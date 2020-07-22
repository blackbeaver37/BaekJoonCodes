#include <iostream>

bool ground[50][50];
int T, M, N, K;

void initGround() {
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			ground[m][n] = false;
		}
	}
}

void change(int x, int y) {
	ground[x][y] = false;
	if (x < M-1 && ground[x + 1][y])
		change(x + 1, y);
	if (y < N-1 && ground[x][y+1])
		change(x, y+1);
	if (x > 0 && ground[x - 1][y])
		change(x - 1, y);
	if (y > 0 && ground[x][y-1])
		change(x, y-1);
}

int main() {
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		initGround();
		scanf("%d %d %d", &M, &N, &K);
		for (int k = 0; k < K; k++) {
			int x, y;
			scanf("%d %d", &x, &y);
			ground[x][y] = true;
		}

		int count = 0;
		for (int m = 0; m < M; m++) {
			for (int n = 0; n < N; n++) {
				if (ground[m][n]) {
					count++;
					change(m, n);
				}
			}
		}
		printf("%d\n", count);
	}

	return 0;
}