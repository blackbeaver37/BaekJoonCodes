#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

char dp[10][7] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };


int main() {
	char c1[7], c2[7], c3[7];
	scanf("%s\n%s\n%s", c1, c2, c3);
	int i1, i2, i3;
	for (int i = 0; i < 10; i++) {
		if (!strcmp(dp[i], c1)) i1 = i;
		if (!strcmp(dp[i], c2)) i2 = i;
		if (!strcmp(dp[i], c3)) i3 = i;
	}

	printf("%ld", (i1 * 10 + i2) * (long)pow(10, i3));

	return 0;
}