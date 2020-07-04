#include <iostream>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int tmp = i;
		int sum = 0;
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		sum += i;
		if (sum == n) {
			ans = i;
			break;
		}
	}
	printf("%d", ans);


	return 0;
}