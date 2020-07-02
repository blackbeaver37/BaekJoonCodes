#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int repeat;
		string str;
		cin >> repeat >> str;
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < repeat; j++)
				cout << str[i];
		}
		cout << endl;
	}

	return 0;
}