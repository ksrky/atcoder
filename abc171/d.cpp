#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        vector<ll> cnt(100005, 0);
        ll sum = 0;
        rep(i, n) {
                int a;
                cin >> a;
                cnt[a]++;
                sum += (ll) a;
        }
        int q;
        cin >> q;
        rep(i, q) {
                int b, c;
                cin >> b >> c;
                sum += (ll) (c - b) * cnt[b];
                cout << sum << endl;
                cnt[c] += cnt[b];
                cnt[b] = 0;
        }
        return 0;
}