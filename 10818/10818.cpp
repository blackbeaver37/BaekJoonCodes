#include <iostream>
#define MAX_NUM 1000000
using namespace std;
int main() {
	int n, max = MAX_NUM * -1, min = MAX_NUM, num[MAX_NUM];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		if (num[i] > max)
			max = num[i];
		if (num[i] < min) {
			min = num[i];
		}
	}
	cout << min << " " << max;
	return 0;
}