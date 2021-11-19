#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        vector<pair<int, string>> mp;
        rep(i, n) {
                string s;
                int t;
                cin >> s >> t;
                mp.emplace_back(t, s);
        }
        sort(mp.begin(), mp.end());
        reverse(mp.begin(), mp.end());
        cout << mp[1].second << endl;
}
