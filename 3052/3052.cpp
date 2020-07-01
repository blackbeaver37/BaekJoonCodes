#include <iostream>
using namespace std;
int main() {
	int n[10];
	int rest[42];
	for (int i = 0; i < 42; i++)
		rest[i] = 0;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n[i];
		rest[n[i] % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
		if (rest[i] == 1)
			count++;
	cout << count;
	return 0;
}