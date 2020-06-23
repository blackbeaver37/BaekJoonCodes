#include <iostream>
using namespace std;
int main() {
	int year, ck = 0;
	cin >> year;
	if (year % 4 == 0)
		ck = 1;
	if (year % 100 == 0)
		ck = 0;
	if (year % 400 == 0)
		ck = 1;
	cout << ck;
	return 0;
}