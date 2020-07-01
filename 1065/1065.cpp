#include<iostream>

int count = 0;

void isRight(int n) {
	if (n < 100) {
		count++;
		return;
	}
	int tmp = n;
	int prevN = tmp%10;
	tmp /= 10;
	int def = tmp%10 - prevN;
	prevN = tmp%10;
	tmp /= 10;
	while (tmp != 0) {
		if (tmp % 10 - prevN == def) {
			prevN = tmp % 10;
			tmp /= 10;
		}
		else
			return;
	}
	count++;
}

int main() {
	int num;
	std::cin >> num;
	for (int i = 1; i <= num; i++)
		isRight(i);

	std::cout << count;

	return 0;
}