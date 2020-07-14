//
// ¼ö¿­
//  n	card
//  1	1
//  2	2
//  3	2
//  4	4
//  5	2
//  6	4
//  7	6
//  8	8
//  9	2
// 10	4
// 11	6
// 12	8
// 13	10
// 14	12
// 15	14
// 16	16
//

#include <iostream>
#include <vector>
#include <cmath>

#define log2(x) log(x)/log(2)

using namespace std;

vector<int> cards;

int findCard(int N) {
	if (N == 1) return 1;
	float powNum = log2(N);
	if (powNum - (int)powNum == 0) return N;

	return (N - pow(2, (int)powNum)) *2;


}

int powNum(int num) {
	if (num == 1) return 0;
}

int main() {
	int N;
	scanf("%d", &N);
	cards.resize(N);
	for (int n = 0; n < N; n++)
		cards[n] = N - n;
	printf("%d", findCard(N));

	return 0;
}