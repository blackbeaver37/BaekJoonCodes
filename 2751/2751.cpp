#include <iostream>
#include <algorithm>

#define MAX_NUM 1000000

using namespace std;

int num[MAX_NUM];

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", num + i);
	sort(num, num + N);

	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);

	return 0;
}