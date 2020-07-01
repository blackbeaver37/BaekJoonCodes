#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		int sum = 0;
		double avg;
		int count = 0;
		cin >> n;
		vector<int> score(n);
		for (int j = 0; j < n; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = (double)sum / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg)
				count++;
		}
		printf("%.3f%%\n", (double)count / n * 100);
	}
}