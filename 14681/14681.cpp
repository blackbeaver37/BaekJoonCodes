#include <iostream>
using namespace std;
int main() {
	int x, y, quad = 0;
	cin >> x;
	cin >> y;
	if (x * y > 0) {
		if (x > 0)
			quad = 1;
		else
			quad = 3;
	}
	else {
		if (x > 0)
			quad = 4;
		else
			quad = 2;
	}
	cout << quad;
	return 0;
}