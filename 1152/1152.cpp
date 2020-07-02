#include<iostream>
#include<string>
using namespace std;
int main() {
	int count = 0;
	string str;
	getline(cin, str);
	if (str[0] != ' ')
		count++;
	for (int i = 1; i < str.length(); i++) {
		if (str[i - 1] == ' ' && str[i] != ' ')
			count++;
	}
	cout << count;

	return 0;
}