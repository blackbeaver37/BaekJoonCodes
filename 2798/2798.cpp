#include<iostream>
#include<vector>
using namespace std;

int num;
int target;

int blackJack(int* card) {
	int ret = 0;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			for (int k = j + 1; k < num; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum > ret && sum <= target)
					ret = sum;
			}
		}
	}
	
	return ret;
}

int main() {
	int ans;
	int card[100];
	scanf("%d %d", &num, &target);
	for (int i = 0; i < num; i++) {
		int tmp;
		scanf("%d", card+i);
	}
	ans = blackJack(card);
	printf("%d", ans);

	return 0;
}