#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		bool chk = true;
		stack<int> s;
		char c[51];
		scanf("%s", &c);
		for (int i = 0; i < strlen(c); i++) {
			if (c[i] == '(') s.push(1);
			else {
				if (s.empty()) {
					printf("NO\n");
					chk = false;
					break;
				}
				s.pop();
			}
		}
		if (chk) {
			if (s.empty()) printf("YES\n");
			else printf("NO\n");
		}
	}

	return 0;
}