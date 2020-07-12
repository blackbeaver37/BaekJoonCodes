#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int, int>> point;

bool compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second)
		return p1.first < p2.first;
	else
		return p1.second < p2.second;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		point.push_back(make_pair(x, y));
	}
	sort(point.begin(), point.end(), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", point[i].first, point[i].second);
	}

	return 0;
}