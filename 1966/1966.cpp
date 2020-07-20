#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

struct work {
	int index;
	int rank;
	work(int i, int r) : index(i), rank(r) {};
};

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int N, M;
		list<work> workList;
		vector<int> rankList;
		scanf("%d %d", &N, &M);		//	 N은 문서의 개수, M은 타겟의 인덱스 (0<=M<N)
		for (int n = 0; n < N; n++) {
			int tmpRank;
			scanf("%d", &tmpRank);
			work tmp(n, tmpRank);
			workList.push_back(tmp);
			rankList.push_back(tmpRank);
		}
		sort(rankList.rbegin(), rankList.rend());

		int targetIndex = 0;
		int rankIndex = 0;
		for(int n=0; n<N; n++) {
			while (workList.front().rank != rankList[rankIndex]) {
				workList.push_back(workList.front());
				workList.pop_front();
			}
			if (workList.front().index == M) {
				targetIndex = n + 1;
				break;
			}
			workList.pop_front();
			rankIndex++;
		}
		printf("%d\n", targetIndex);
	}

	return 0;
}