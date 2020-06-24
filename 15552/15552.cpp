#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		cout << n1 + n2 << "\n";
	}
	return 0;
}