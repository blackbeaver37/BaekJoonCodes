#include <iostream>
#include <list>

using namespace std;

int main() {
	int N, K;
	scanf("%d %d", &N, &K);

	list<int> l;
	for (int i = 1; i <= N; i++) l.push_back(i);

	list<int>::iterator pos = l.begin();
	printf("<");
	while (l.size() != 1) {
		if (pos == l.end()) pos = l.begin();
		for (int i = 1; i < K; i++) {
			pos++;
			if (pos == l.end()) pos = l.begin();
		}
		printf("%d, ", *pos);
		pos = l.erase(pos);
	}
	printf("%d>", l.front());

	return 0;
}