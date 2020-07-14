// 
// 길이가 10,000,000 * 2 배열을 선언 및 초기화 하고 사용하기에 
// 이 코드는 메모리 낭비가 있다.
//

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_NUM 500000
#define BIG_NUM 10000000

using namespace std;

int num[MAX_NUM], keys[MAX_NUM];
int countArr[2 * BIG_NUM + 1] = { 0, };

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
		countArr[num[n] + BIG_NUM]++;
	}
	sort(num, num + N);
	int M;
	scanf("%d", &M);
	for (int m = 0; m < M; m++) {
		scanf("%d", keys + m);
	}
	for (int m = 0; m < M; m++) {
		if (search(0, N - 1, keys[m])) printf("%d ", countArr[keys[m] + BIG_NUM]);
		else printf("0 ");
	}

	return 0;
}