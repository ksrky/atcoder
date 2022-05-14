#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

vector<int> prime;
map<int, int> mp;
vector<bool> isPrime(1000005, true);

int main() {
        ll n;
        cin >> n;
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i <= 1000000; i++) {
                if (isPrime[i]) {
                        if (i == 2) mp[i] = 0;
                        else mp[i] = mp[prime.back()] + 1;
                        prime.push_back(i);
                        for (int j = 2; i * j <= 1000000; j++) isPrime[i * j] = false;
                }
        }
        //for (auto q: prime) cout << mp[q] << endl;
        ll ans = 0;
        for (auto q: prime) {
                ll p = (ll) q;
                if (p * p * p > n) break;
                if (p == 2) continue;
                int d = min(n / (p * p * p), p - 1);
                auto it = upper_bound(prime.begin(), prime.end(), d);
                //cout << q << ' ' << d << endl;
                //cout<<ans<<endl;
                ans += (ll) distance(prime.begin(), it);
        }
        cout << ans << endl;
}
