#include <iostream>
using namespace std;
int main() {
	int a, b, b1, b10, b100;
	cin >> a >> b;
	b100 = b / 100;
	b10 = (b - b100 * 100) / 10;
	b1 = b - b100 * 100 - b10 * 10;
	cout << a * b1 << endl << a * b10 << endl << a * b100 << endl << a * b;
	return 0;
}