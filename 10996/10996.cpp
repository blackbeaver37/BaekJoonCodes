#include<iostream>
using namespace std;
int main() {
	int num;
	scanf("%d", &num);
	int mid = (num + 1) / 2;
	bool flag;
	for (int i = 0; i < num; i++) {
		flag = true;
		for (int i = 0; i < num; i++) {
			if (i == mid) {
				printf("\n");
				flag = false;
			}
			if (flag)
				printf("* ");
			else
				printf(" *");
			
		}
		printf("\n");
	}

	return 0;
}