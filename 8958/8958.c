#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		char answer[80];
		int score = 0;
		int tmp = 0;
		scanf("%s", answer);
		for (int j = 0; answer[j] != '\0'; j++) {
			if (answer[j] == 'O') {
				tmp++;
				score += tmp;
			}
			else
				tmp = 0;
		}
		printf("%d\n", score);
	}
	return 0;
}