#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define MAX 50

string panel[MAX];
string rightLine_1[8] = { 
	{"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"},
	{"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"} 
};
string rightLine_2[8] = { 
	{"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, 
	{"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"} 
};

int checkWrong_1(int x, int y) {
	int ret = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (rightLine_1[i][j] != panel[y + i][x + j]) ret++;
		}
	}

	return ret;
}

int checkWrong_2(int x, int y) {
	int ret = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (rightLine_2[i][j] != panel[y + i][x + j]) ret++;
		}
	}

	return ret;
}

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	for (int n = 0; n < N; n++) 
		cin >> panel[n];

	int cnt = 250;
	for (int x = 0; x < M - 7; x++) {
		for (int y = 0; y < N - 7; y++) {
			int tmp_1 = checkWrong_1(x, y);
			int tmp_2 = checkWrong_2(x, y);
			int tmp = min(tmp_1, tmp_2);
			cnt = min(cnt, tmp);
		}
	}
	printf("%d", cnt);

	return 0;
}