#include <iostream>
using namespace std;
int main() {
	int p1 = 2000;
	int p2 = 2000;
	int tmp;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		if (p1 > tmp)
			p1 = tmp;
	}
	for (int i = 0; i < 2; i++) {
		cin >> tmp;
		if (p2 > tmp)
			p2 = tmp;
	}
	cout << p1 + p2 - 50;
	return 0;
}