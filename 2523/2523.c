#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i = 1;
	int flag = 1;
	while (1) {
		for (int j = 0; j < i; j++)
			printf("*");
		if (i == n)
			flag = -1;
		i += flag;
		if (i == 0)
			break;
		printf("\n");
	}
	return 0;
}