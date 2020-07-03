#include<iostream>

using namespace std;

int num;
bool alp[26];

void initAlp() {
	for (int i = 0; i < 26; i++)
		alp[i] = true;
}

bool isGroup(string str) {
	int ret = true;
	initAlp();
	for (int i = 0; i < str.length()-1; i++) {
		if (alp[str[i] - 'a'] == false)
			return false;
		if (alp[str[i+1] - 'a'] == false)
			return false;
		if (str[i] == str[i + 1])
			continue;
		else {
			alp[str[i] - 'a'] = false;
		}
	}

	return ret;
}

int main() {
	cin >> num;
	int count = 0;
	for (int i = 0; i < num; i++) {
		string tmp;
		cin >> tmp;
		if (isGroup(tmp))
			count++;
	}
	cout << count;
	
	return 0;
}