#include <iostream>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (x > t)
			cout << t << " ";
	}
	return 0;
}