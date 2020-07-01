#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_of_items;
int capacity_of_bag;
vector<pair<int, int>> item;
vector<vector<int>> dp;

int bigVal(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}

int knapSack(int pos, int capacity) {
	if (pos == num_of_items)
		return 0;

	int ret = dp[pos][capacity];
	if (ret != -1)
		return ret;
	if (item[pos].first <= capacity) 
		ret = item[pos].second + knapSack(pos + 1, capacity - item[pos].first);
	ret = bigVal(ret, knapSack(pos + 1, capacity));
	dp[pos][capacity] = ret;

	return ret;
}

int main() {
	cin >> num_of_items >> capacity_of_bag;
	vector<int> tmp(capacity_of_bag+1, -1);
	for (int i = 0; i < num_of_items; i++) {
		int w, v;
		cin >> w >> v;
		item.push_back(make_pair(w, v));
		dp.push_back(tmp);
	}


	cout << knapSack(0, capacity_of_bag);
	
	return 0;
}