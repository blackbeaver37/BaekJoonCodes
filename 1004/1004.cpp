#include <iostream>
#include <cmath>

int cx[50], cy[50], r[50];
int x_1, x_2, y_1, y_2;

inline int distance(int index, int x, int y) {
	return pow(x - cx[index], 2) + pow(y - cy[index], 2);
}

bool isInside(int index) {
	bool ret = true;
	int dis1 = distance(index, x_1, y_1);
	int dis2 = distance(index, x_2, y_2);
	if (dis1 > pow(r[index], 2) && dis2 > pow(r[index], 2))	 ret = false;
	else if (dis1 < pow(r[index], 2) && dis2 < pow(r[index], 2))	 ret = false;
	
	return ret;
}

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d %d %d %d", &x_1, &y_1, &x_2, &y_2);
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d %d", cx + i, cy + i, r + i);
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (isInside(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
}