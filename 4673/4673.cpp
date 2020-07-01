#include<iostream>

using namespace std;

#define MAX_NUM 10000

bool selfNum[MAX_NUM];

void d(int num) {
	int sum = 0;
	int tmp = num;
	while (tmp != 0) {
		sum += tmp % 10;
		tmp /= 10;
	}
	selfNum[num + sum - 1] = true;
}

int main() {
	for (int i = 0; i < MAX_NUM; i++)
		selfNum[i] = false;
	for (int i = 0; i < MAX_NUM; i++)
		d(i+1);
	for (int i = 0; i < MAX_NUM; i++) {
		if (!(selfNum[i]))
			cout << i + 1 << "\n";
	}

	return 0;
}