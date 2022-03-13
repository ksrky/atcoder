#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;
const ll MOD = 998244353;

int invert(int x) {
        int res = x, s = 0;
        for (int i = 0; (1 << i) < MOD; i++) {
                res *= res;
                res %= MOD;
                s = i;
        }
        return res;
        for (int i = (1 << s); i < MOD; i++) {
                res *= x;
                res %= MOD;
        }
        return res;
}

int main() {
        ll x = 2;
        ll res = x, s = 0;
        for (ll i = 0; (1 << i) < MOD; i++) {
                res *= res;
                res %= MOD;
                s = i;
        }
        cout << s << " " << res << endl;
        for (ll i = (1 << s); i < MOD; i++) {
                res *= x;
                res %= MOD;
        }
        cout << res << endl;
}