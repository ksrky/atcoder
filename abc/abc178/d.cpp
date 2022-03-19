#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)

using namespace std;

const long long MOD = 1000000007;

int main() {
        long long n;
        cin >> n;
        vector<long long> a(n, 0);
        rep(i, n) {
                if (i == 0) a[i] = 1;
                else if (i == 1 || i == 2) a[i] = 0;
                else rep(j, i - 2) a[i] = (a[i] + a[j]) % MOD;
        }

        if (n >= 3) cout << (a[n - 1] + a[n - 3]) % MOD << endl;
        else cout << 0 << endl;
        return 0;
}
