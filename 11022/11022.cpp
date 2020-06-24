#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		cout << "Case #" << i + 1 << ": " << n1 <<" + "<< n2 <<" = "<< n1 + n2 << "\n";
	}
	return 0;
}