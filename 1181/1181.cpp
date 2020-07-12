#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> arr;

bool compare(string str1, string str2) {
	if (str1.size() == str2.size())
		return str1 < str2;
	else
		return str1.size() < str2.size();
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end(), compare);
	cout << arr[0] << endl;
	for (int i = 1; i < N; i++)
		if(arr[i] != arr[i-1])
			cout << arr[i] << endl;

	return 0;
}