#include <iostream>

int T;
int ds[15][15];

void initDs() {
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == 0)
				ds[i][j] = j;
			else
				ds[i][j] = 0;
		}
	}
}

int numOfPeople(int k, int n) {
	int ret = 0;
	if (ds[k][n] == 0) {
		for (int i = 1; i <= n; i++) {
			ret += numOfPeople(k - 1, i);
		}
		ds[k][n] = ret;
	}
	else
		ret = ds[k][n];
	
	return ret;
}

int main() {
	int k, n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		initDs();
		int num = numOfPeople(k, n);
		printf("%d\n", num);
	}

	return 0;
}