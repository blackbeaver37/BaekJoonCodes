#include <iostream>

int T, H, W, N;

int findRoomNum() {
	int room, floor, count;
	count = N / H;
	floor = N % H;
	if (floor == 0)
		floor = H;
	else
		count++;
	room = floor * 100 + count;

	return room;
}

int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		int room = findRoomNum();
		printf("%d\n", room);
	}

	return 0;
}