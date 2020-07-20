#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

deque<int> d;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		char tmp[11];
		scanf("%s", tmp);

		if (!strcmp(tmp, "push_front")) {
			int num;
			scanf("%d", &num);
			d.push_front(num);
		}
		else if (!strcmp(tmp, "push_back")) {
			int num;
			scanf("%d", &num);
			d.push_back(num);
		}
		else if (!strcmp(tmp, "pop_front")) {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.front());
				d.pop_front();
			}
		}
		else if (!strcmp(tmp, "pop_back")) {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.back());
				d.pop_back();
			}
		}
		else if (!strcmp(tmp, "size")) {
			printf("%d\n", d.size());
		}
		else if (!strcmp(tmp, "empty")) {
			printf("%d\n", d.empty());
		}
		else if (!strcmp(tmp, "front")) {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.front());
			}
		}
		else if (!strcmp(tmp, "back")) {
			if (d.empty()) printf("-1\n");
			else {
				printf("%d\n", d.back());
			}
		}
	}

	return 0;
}