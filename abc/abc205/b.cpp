#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        vector<bool> used(n, false);
        bool ans = true;
        rep(i, n) {
                int a;
                cin >> a;
                if (used[a - 1]) ans = false;
                else used[a - 1] = true;
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
}
