#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<char> c(n);
        int w = 0, r = 0;
        for (int i = 0; i < n; ++i) {
                cin >> c[i];
                if (c[i] == 'W') w++;
                else r++;
        }
        int ans = 0;
        for (int i = 0; i < r; ++i) {
                if (c[i] == 'W') ans++;
        }
        cout << ans << endl;
}
