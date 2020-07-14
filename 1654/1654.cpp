//
// 랜선의 길이는 2^31 -1 보다 작거나 같으므로 int 형 불가 long long 사용
// findLen 함수에서 기존 이분탐색 방법 사용하면 랜선 길이의 최대값을 구할 수 없다.
// 그래서 이분탐색에서 하나의 값을 반환하는게 아닌 조건이 맞는 경우에 start값을 늘리면서 while문 탈출시까지 돌린다.
//

#include <iostream>
#include <vector>

using namespace std;

vector<long long> line;

long long findLen(int numOfV, long long max, int numOfT) {
	long long start = 1;
	long long end = max;
	long long mid;
	while (start <= end) {
		mid = (start + end) / 2;
		long long count = 0;
		for (int i = 0; i < numOfV; i++)
			count += line[i] / mid;
		if (count >= numOfT) start = mid + 1;
		else end = mid - 1;
	}
	return end;
}

int main() {
	int K, N;
	scanf("%d %d", &K, &N);
	long long sum = 0;
	for (int i = 0; i < K; i++) {
		long long tmp;
		scanf("%lld", &tmp);
		line.push_back(tmp);
		sum += tmp;
	}
	long long maxLen = sum / N;
	long long len = findLen(K, maxLen, N);

	printf("%lld", len);

	return 0;
}