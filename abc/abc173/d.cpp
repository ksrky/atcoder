#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<long long> a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        long long sum = 0;
        rep(i, n / 2) {
                sum += a[i] * 2;
        }
        sum -= a[0];
        if (n % 2 == 1) sum += a[n / 2];
        cout << sum << endl;
}
