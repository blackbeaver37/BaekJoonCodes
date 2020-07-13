#include <iostream>
#include <algorithm>

using namespace std;

int findGCD(int big, int small) {
	int tmp;
	while (small != 0){
		tmp = big % small;
		big = small;
		small = tmp;
	}
	return big;
}

int findLCM(int big, int small) {
	return big * small / findGCD(big, small);
}

int main() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int GCD = findGCD(max(n1, n2), min(n1, n2));
	int LCM = findLCM(max(n1, n2), min(n1, n2));
	printf("%d\n%d", GCD, LCM);

	return 0;
}