#include <stdio.h>
int main() {
	int year, ck = 0;
	scanf("%d", &year);
	if (year % 4 == 0)
		ck = 1;
	if (year % 100 == 0)
		ck = 0;
	if (year % 400 == 0)
		ck = 1;
	printf("%d", ck);
	return 0;
}