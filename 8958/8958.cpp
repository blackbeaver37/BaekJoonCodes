#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string answer;
		int score = 0;
		int tmp = 0;
		cin >> answer;
		for (int j = 0; j<answer.size(); j++) {
			if (answer[j] == 'O') {
				tmp++;
				score += tmp;
			}
			else
				tmp = 0;
		}
		cout << score << "\n";
	}
	return 0;
}