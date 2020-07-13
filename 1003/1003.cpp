//
// countOne�� n�� �ش��ϴ� �Ǻ���ġ���� ����
// countZero�� n-1�� �ش��ϴ� �ĺ���ġ���� ����.
// ��, n==0 �϶��� 1, n==1 �϶��� 0
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> fibo;

int fibonacci(int n) {
    if (fibo[n] == -1) {
        if (n == 0) {
            fibo[0] = 0;
            return 0;
        }
        else if (n == 1) {
            fibo[1] = 1;
            return 1;
        }
        else {
            fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
            return fibo[n];
        }
    }
    else
        return fibo[n];
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int n, countZero, countOne;
        scanf("%d", &n);
        fibo.resize(n+1);
        fill_n(fibo.begin(), n+1, -1);
        countOne = fibonacci(n);
        if (n == 0) countZero = 1;
        else if (n == 1) countZero = 0;
        else countZero = fibo[n - 1];
        printf("%d %d\n", countZero, countOne);
    }

    return 0;
}