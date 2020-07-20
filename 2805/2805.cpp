#include <iostream>
#include <vector>

using namespace std;

typedef long long llint;

vector<llint> trees;

llint calculLength(llint height) {
	llint ret = 0;
	for(int i=0; i<trees.size(); i++) {
		llint tmp = trees[i] - height;
		if (tmp < 0) tmp = 0;
		ret += tmp;
	}
	return ret;
}

int main() {
	int N;
	llint M;
	scanf("%d %lld", &N, &M);
	llint max = 0;
	for (int n = 0; n < N; n++) {
		llint tmp;
		scanf("%lld", &tmp);
		trees.push_back(tmp);
		if (tmp > max) max = tmp;
	}

	llint start = 1;
	llint end = max;
	while (start <= end) {
		llint mid = (start + end) / 2;
		if (M <= calculLength(mid))
			start = mid + 1;
		else
			end = mid  - 1;
	}
	printf("%lld", end);

	return 0;
}