#include <iostream>
#include <vector>
#include <set>

using namespace std;

multiset<int> Q;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		Q.clear();
		int L;
		cin >> L;
		for (int l = 0; l < L; l++) {
			char op;
			int num;
			cin >> op >> num;
			// Insert
			if (op == 'I') {
				Q.insert(num);
			}
			// Delete
			else if (op == 'D') {
				if (!Q.empty()) {
					if (num == 1) Q.erase(prev(Q.end()));
					else Q.erase(Q.begin());
				}
			}
		}
		if (Q.empty()) printf("EMPTY\n");
		else {
			auto min = Q.begin();
			auto max = Q.end();
			printf("%d %d\n", *(--max), *min);
		}
	}

	return 0;
}