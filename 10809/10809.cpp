#include<iostream>
using namespace std;
int main() {
	string str;
	int alp[26];
	cin >> str;
	for (int i = 0; i < 26; i++)
		alp[i] = -1;
	for (int i = str.length()-1; i >= 0; i--)
		alp[str[i] - 'a'] = i;

	for (int i = 0; i < 26; i++)
		cout << alp[i] << " ";

	return 0;
}