#include <iostream>
using namespace std;
int main() {
	int num[9];
	int max_index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (num[i] > num[max_index])
			max_index = i;
	}
	cout << num[max_index] << "\n" << max_index + 1;
	return 0;
}