#include <iostream>

int main() {
	int sound[8];
	for(int i=0; i<8; i++)
		scanf("%d", sound + i);
	if (sound[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (sound[i] != i + 1) {
				printf("mixed");
				break;
			}
			if (i == 7) printf("ascending");
		}
	}
	else if (sound[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if (sound[i] != 8 - i) {
				printf("mixed");
				break;
			}
			if (i == 7) printf("descending");
		}
	}
	else printf("mixed");

	return 0;
}