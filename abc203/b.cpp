#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

const ll MOD = 998244353;

int main() {
        int n, k;
        cin >> n >> k;
        int ans = n * (n + 1) / 2 * k * 100 + n * k * (k + 1) / 2;
        cout << ans << endl;
}
