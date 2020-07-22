#include <iostream>
#include<climits>

using namespace std;

#define MAX 500

int block[MAX][MAX];

int main() {
    int N, M, B;
    int min = INT_MAX;
    int max = 0;

    scanf("%d %d %d", &N, &M, &B);
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            int tmp;
            scanf("%d", &tmp);
            block[n][m] = tmp;
            if (tmp > max) max = tmp;
            if (tmp < min) min = tmp;
        }
    }
    int height = min;
    int time = INT_MAX;

    for (int h = min; h <= max; h++) {
        int sum_add = 0;
        int sum_remove = 0;

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                int tmp = h - block[n][m];

                if (tmp < 0)
                    sum_remove += tmp * -1;
                else
                    sum_add += tmp;
            }
        }

        if (sum_add <= sum_remove + B) {
            int tmp = sum_add + sum_remove * 2;
            if (time > tmp) {
                time = tmp;
                height = h;
            }

            if (tmp == time)
                if (height < h)
                    height = h;
        }
    }
    printf("%d %d", time, height);

    return 0;
}