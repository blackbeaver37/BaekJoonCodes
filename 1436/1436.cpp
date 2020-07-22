#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	stack<int> title;
	title.push(666);
	for (int n = 2; n <= N; n++) {
		int tmp = title.top() + 1;
		while (true) {
			string str(to_string(tmp));
			if (str.find("666") != -1) {
				title.push(tmp);
				break;
			}
			else {
				tmp++;
			}
		}
	}
	printf("%d", title.top());

	return 0;
}