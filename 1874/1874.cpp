#include <iostream>
#include <stack>
#include <list>

using namespace std;

list<int> tgList;
stack<int> retStk;
list<char> ansList;

int main() {
	int N;
	scanf("%d", &N);
	for (int n = 0; n < N; n++) {
		int tmp;
		scanf("%d", &tmp);
		tgList.push_back(tmp);
	}

	int nextNum = 1;
	while (!tgList.empty()) {
		if (retStk.empty()) {
			retStk.push(nextNum++);
			ansList.push_back('+');
		}
		if (tgList.front() == retStk.top()) {
			ansList.push_back('-');
			tgList.pop_front();
			retStk.pop();
		}
		else if (tgList.front() >= retStk.top()) {
			ansList.push_back('+');
			retStk.push(nextNum++);
		}
		else {
			printf("NO");
			break;
		}
	}

	if (tgList.empty()) {
		list<char>::iterator pos;
		for (pos = ansList.begin(); pos != ansList.end(); pos++)
			printf("%c\n", *pos);
	}


	return 0;
}