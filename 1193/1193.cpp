#include <iostream>

int main() {
	int n;
	scanf("%d", &n);
	
	int line = 1;
	int tmp = 1;
	for (int i = 1; i <= n; i++) {
		if (i > tmp) {
			line++;
			tmp += line;
		}
	}
	int way;
	if (line % 2)
		way = 1;
	else
		way = -1;
	int target = line - (tmp - n);
	if (way == 1)
		printf("%d/%d", line - target + 1, target);
	else
		printf("%d/%d", target, line - target + 1);

	return 0;
}