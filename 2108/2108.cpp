#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_NUM 500000

using namespace std;

int N;
int num[MAX_NUM];

double avg(int* arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum / n;
}

double mid(int* arr, int n) {
	double ret;
	double num1 = arr[n / 2 - 1];
	double num2 = arr[n / 2];
	if (n % 2 == 0) ret = (num1 + num2) / 2;
	else ret = num2;
	return ret;
}

int most(int* arr, int n) {
	vector<pair<int, int>> count;
	count.push_back(make_pair(arr[0], 1));
	int preVal = arr[0];
	int locate = 0;
	for (int i = 1; i < n; i++) {
		if (preVal == arr[i])
			count[locate].second++;
		else {
			count.push_back(make_pair(arr[i], 1));
			preVal = arr[i];
			locate++;
		}
	}
	int mostIndex = 0;
	int mostCount = 0;
	bool isFirst = true;
	for (int i = 0; i < locate+1; i++) {
		if (mostCount < count[i].second) {
			mostCount = count[i].second;
			mostIndex = i;
			isFirst = true;
		}
		else if (mostCount == count[i].second && isFirst) {
			mostIndex = i;
			isFirst = false;
		}
	}
	return count[mostIndex].first;
}

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", num+i);
	sort(num, num + N);

	printf("%.0f\n", avg(num, N));
	printf("%.0f\n", mid(num, N));
	printf("%d\n", most(num, N));
	printf("%d\n", *(num+(N-1)) - *num);

	return 0;
}