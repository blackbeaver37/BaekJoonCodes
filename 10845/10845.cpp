#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

queue<int> q;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		char tmp[6];
		scanf("%s", tmp);

		if (!strcmp(tmp, "push")) {
			int num;
			scanf("%d", &num);
			q.push(num);
		}
		else if (!strcmp(tmp, "pop")) {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (!strcmp(tmp, "size")) {
			printf("%d\n", q.size());
		}
		else if (!strcmp(tmp, "empty")) {
			printf("%d\n", q.empty());
		}
		else if (!strcmp(tmp, "front")) {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.front());
			}
		}
		else if (!strcmp(tmp, "back")) {
			if (q.empty()) printf("-1\n");
			else {
				printf("%d\n", q.back());
			}
		}
	}

	return 0;
}