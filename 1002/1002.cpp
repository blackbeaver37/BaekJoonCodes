#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int x1, y1, r1;
		int x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) {
				printf("-1\n");
				continue;
			}
			else {
				printf("0\n");
				continue;
			}
		}

		int sumOfRadius = r1 + r2;
		double pointDiff = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));

		if (pointDiff > sumOfRadius)
			printf("0\n");
		else if (pointDiff == sumOfRadius || pointDiff == abs(r1-r2))
			printf("1\n");
		else if (pointDiff < abs(r1-r2))
			printf("0\n");
		else
			printf("2\n");
	}

	return 0;
}