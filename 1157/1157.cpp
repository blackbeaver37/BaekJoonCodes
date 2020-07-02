#include<iostream>
using namespace std;
int main() {
	string str;
	cin >> str;
	int alp[26];
	for (int i = 0; i < 26; i++)
		alp[i] = 0;
	for (int i = 0; i < str.length(); i++) {
		int index;
		if (str[i] >= 'a')
			index = str[i] - 'a';
		else
			index = str[i] - 'A';
		alp[index]++;
	}

	int max = -1;
	int max_index = -1;
	for (int i = 0; i < 26; i++) {
		if (alp[i] > max) {
			max = alp[i];
			max_index = i;
		}
	}

	bool isUnique = true;
	for (int i = 0; i < 26; i++) {
		if (alp[i] == max && i != max_index)
			isUnique = false;
	}

	if (isUnique)
		printf("%c", 'A' + max_index);
	else
		printf("?");

	return 0;
}