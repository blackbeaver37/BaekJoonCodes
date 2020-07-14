#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int K;
	scanf("%d", &K);
	for (int k = 0; k < K; k++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp == 0) s.pop();
		else s.push(tmp);
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	printf("%d", sum);

	return 0;
}