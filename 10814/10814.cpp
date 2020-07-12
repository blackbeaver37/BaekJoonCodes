#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int, string>> info;

bool compare(pair<int, string> p1, pair<int, string> p2) {
	return p1.first < p2.first;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int tmpAge;
		char tmpName[101];
		scanf("%d %s", &tmpAge, tmpName);
		info.push_back(make_pair(tmpAge, tmpName));
	}
	sort(info.begin(), info.end(), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %s\n", info[i].first, info[i].second.c_str());
	}

	return 0;
}