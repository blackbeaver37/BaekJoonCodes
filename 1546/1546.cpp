#include <iostream>
using namespace std;
int main() {
	int n, score[1000];
	int max = 0;
	double sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}
	for (int i = 0; i < n; i++)
		sum += (double)score[i] / max * 100;
	cout << sum / n;
}