#include<iostream>
using namespace std;

int swap(int num) {
	int n1 = num % 10;
	int n2 = num % 100 / 10;
	int n3 = num / 100;
	return n1 * 100 + n2 * 10 + n3;
}

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int n1_s = swap(n1);
	int n2_s = swap(n2);
	if (n1_s > n2_s)
		cout << n1_s;
	else
		cout << n2_s;

	return 0;
}