//
// ������ ���̴� 2^31 -1 ���� �۰ų� �����Ƿ� int �� �Ұ� long long ���
// findLen �Լ����� ���� �̺�Ž�� ��� ����ϸ� ���� ������ �ִ밪�� ���� �� ����.
// �׷��� �̺�Ž������ �ϳ��� ���� ��ȯ�ϴ°� �ƴ� ������ �´� ��쿡 start���� �ø��鼭 while�� Ż��ñ��� ������.
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