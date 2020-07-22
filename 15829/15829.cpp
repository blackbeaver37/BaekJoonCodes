#include <iostream>

#define MAX 50
#define M 1234567891
#define r 31

using lld = long long;

inline int alpToNum(char c) {
    return c - 'a' + 1;
}

int main(){
    int L;
    lld ans = 0, R = 1;
    scanf("%d", &L);
    char num[MAX];
    scanf("%s", num);
    for(int i=0; i<L; i++) {
        ans = (ans + (alpToNum(num[i])) * R) % M;
        R = (R*r) % M;
    }
    printf("%d", ans);

    return 0;
}