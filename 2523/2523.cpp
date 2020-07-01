#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 1;
	int flag = 1;
	while (1) {
		for (int j = 0; j < i; j++)
			cout << "*";
		if (i == n)
			flag = -1;
		i += flag;
		if (i == 0)
			break;
		cout << "\n";
	}
	return 0;
}