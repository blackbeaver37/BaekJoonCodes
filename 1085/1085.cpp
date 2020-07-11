#include <iostream>

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int length, lengthW, lengthH;
	if (w - x > x) lengthW = x;
	else lengthW = w - x;

	if (h - y > y) lengthH = y;
	else lengthH = h - y;

	if (lengthH > lengthW) length = lengthW;
	else length = lengthH;

	printf("%d", length);

	return 0;
}