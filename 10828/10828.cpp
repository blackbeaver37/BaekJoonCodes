#include <iostream>
#include <stack>
#include <vector>
#include <cstring>

using namespace std;

stack<int> s;

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		char tmp[6];
		scanf("%s", tmp);

		if (!strcmp(tmp, "push")) {
			int num;
			scanf("%d", &num);
			s.push(num);
		}
		else if (!strcmp(tmp, "pop")) {
			if (s.empty()) printf("-1\n");
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (!strcmp(tmp, "size")) {
			printf("%d\n", s.size());
		}
		else if (!strcmp(tmp, "empty")) {
			printf("%d\n", s.empty());
		}
		else if (!strcmp(tmp, "top")) {
			if (s.empty()) printf("-1\n");
			else {
				printf("%d\n", s.top());
			}
		}
	}

	return 0;
}