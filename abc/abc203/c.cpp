#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        ll k;
        cin >> n >> k;
        vector<pair<ll, int>> ab;
        rep(i, n) {
                ll a;
                int b;
                cin >> a >> b;
                ab.emplace_back(a, b);
        }
        sort(ab.begin(), ab.end());
        rep(i, n) {
                if (k - ab[i].first >= 0) {
                        k += ab[i].second;
                } else {
                        break;
                }
        }
        cout << k << endl;
}