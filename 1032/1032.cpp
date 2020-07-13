#include <iostream>
#include <string.h>

int main() {
	int N;
	scanf("%d", &N);
	char str[51];
	scanf("%s", str);
	for (int i = 1; i < N; i++) {
		char tmp[51];
		scanf("%s", tmp);
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] != tmp[j])
				str[j] = '?';
		}
	}
	printf("%s", str);

	return 0;
}