#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {
	while (true) {
		stack<int> s;
		char c[101];
		cin.getline(c, 101, '\n');
		bool chk = true;
		if (strlen(c) == 1 && c[0] == '.') break;
		for (int i = 0; i < strlen(c); i++) {
			if (c[i] == '(') {
				s.push(1);
			}
			else if (c[i] == ')') {
				if (s.empty() || s.top() == 2) {
					chk = false;
					break;
				}
				else s.pop();
			}
			else if (c[i] == '[') {
				s.push(2);
			}
			else if (c[i] == ']') {
				if (s.empty() || s.top() == 1) {
					chk = false;
					break;
				}
				else s.pop();
			}
		}
		if (!s.empty()) chk = false;
		if (chk) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}