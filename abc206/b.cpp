#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
    int p;
    cin >> p;
    int c[10];
    c[0] = 1;
    for (int i = 1; i < 10; i++) {
        c[i] = c[i - 1] * (i + 1);
    }

    int cnt = 0;
    while (p > 0) {
        for (int i = 9; i >= 0; i--) {
            if (p >= c[i]) {
                p -= c[i];
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}