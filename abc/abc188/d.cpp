#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
        int N;
        long long C;
        cin>>N>>C;
        vector<pair<long long, long long>> e;
        rep(i,N){
                long long a, b, c;
                cin >> a >> b >> c;
                e.emplace_back(a - 1, c);
                e.emplace_back(b, -c);
        }
        sort(e.begin(), e.end());
        int d = 0;
        long long ans = 0, total = 0;
        for(auto[x, y] : e){
                ans += min(C, total) * (x - d);
                d = x;
                total += y;
        }
        cout << ans << endl;
}