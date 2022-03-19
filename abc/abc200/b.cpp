#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        ll n;
        int k;
        cin >> n >> k;
        rep(i, k) {
                if (n % 200 == 0) n /= 200;
                else n = n * 1000LL + 200;
        }
        cout << n << endl;
}
