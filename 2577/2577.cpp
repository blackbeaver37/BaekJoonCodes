#include <iostream>
using namespace std;
int main() {
	int integer[10];
	for (int i = 0; i < 10; i++)
		integer[i] = 0;
	int num = 1, tmp;
	for (int i = 0; i < 3; i++) {
		cin >> tmp;
		num *= tmp;
	}
	while (num != 0) {
		integer[num % 10]++;
		num /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << integer[i] << "\n";
	return 0;
}