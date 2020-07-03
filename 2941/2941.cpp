#include<iostream>
using namespace std;

int isCroAlp(string str) {
	int ret=1;
	if (str[0] == 'c') {
		if (str[1] == '=' || str[1] == '-')
			ret = 2;
	}
	if (str[0] == 'd' && str[1] == 'z' && str[2] == '=')
		ret = 3;
	if (str[0] == 'd' && str[1] == '-')
		ret = 2;
	if (str[0] == 'l' && str[1] == 'j')
		ret = 2;
	if (str[0] == 'n' && str[1] == 'j')
		ret = 2;
	if (str[0] == 's' && str[1] == '=')
		ret = 2;
	if (str[0] == 'z' && str[1] == '=')
		ret = 2;
	return ret;
}

int main() {
	string str;
	int count = 0;
	cin >> str;
	for (int i = 0; i < str.length();) {
		i += isCroAlp(str.substr(i, 3));
		count++;
	}
	cout << count;

	return 0;
}