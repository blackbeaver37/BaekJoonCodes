#include<iostream>
using namespace std;

int charToInt(char c) {
	switch (c) {
	case 'A': case 'B': case 'C':
		return 2;
	case 'D': case 'E': case 'F':
		return 3;
	case 'G': case 'H': case 'I':
		return 4;
	case 'J': case 'K': case 'L':
		return 5;
	case 'M': case 'N': case 'O':
		return 6;
	case 'P': case 'Q': case 'R': case 'S':
		return 7;
	case 'T': case 'U': case 'V':
		return 8;
	case 'W': case 'X': case 'Y': case 'Z':
		return 9;
	}
}

int dialToInt(string str) {
	int ret = 0;
	for (int i = 0; i < str.length(); i++) {
		ret += charToInt(str[i]) + 1;
	}
	return ret;
}

int main() {
	string str;
	cin >> str;
	cout << dialToInt(str);

	return 0;
}