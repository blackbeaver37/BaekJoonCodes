#include <stdio.h>
int main() {
	int num[9];
	int max_index=0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", num + i);
		if (num[i] > num[max_index])
			max_index = i;
	}
	printf("%d\n%d", num[max_index], max_index + 1);
	return 0;
}