#include<bits/stdc++.h>

using namespace std;

int main() {
        long long n, mod = 1000000007;
        cin >> n;
        long long te = 1, ni = 1, ei = 1;
        for (int i = 0; i < n; i++) {
                te *= 10;
                ni *= 9;
                ei *= 8;
                te %= mod;
                ni %= mod;
                ei %= mod;
        }
        long long ans = (te - (ni * 2 - ei) + mod * 2) % mod;
        cout << ans << endl;
}