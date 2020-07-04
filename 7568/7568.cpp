#include<iostream>
using namespace std;
int main() {
	int n;
	pair<int, int> info[50];
	int rank[50];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &info[i].first, &info[i].second);
	}

	for (int i = 0; i < n; i++) {
		rank[i] = 1;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (info[i].first < info[j].first && info[i].second < info[j].second)
				rank[i]++;
		}
	}
	
	for (int i = 0; i < n; i++)
		printf("%d ", rank[i]);

	return 0;
}