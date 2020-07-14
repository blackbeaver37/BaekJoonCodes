#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_NUM 100000

using namespace std;

int num[MAX_NUM], keys[MAX_NUM];

bool search(int start, int end, int key) {
	bool ret = false;
	int mid;
	while (start <= end) {
		mid = (start + end) / 2;
		if (num[mid] == key) {
			ret = true;
			break;
		}
		else if (num[mid] > key) end = mid - 1;
		else start = mid + 1;
	}
	return ret;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int n = 0; n < N; n++) {
		scanf("%d", num + n);
	}
	sort(num, num + N);
	int M;
	scanf("%d", &M);
	for (int m = 0; m < M; m++) {
		scanf("%d", keys+m);
	}
	for (int m = 0; m < M; m++) {
		if (search(0, N - 1, keys[m])) printf("1\n");
		else printf("0\n");
	}

	return 0;
}