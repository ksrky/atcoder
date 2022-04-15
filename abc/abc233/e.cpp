#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s;
        cin >> s;
        vector<int> sum(s.size() + 1);
        sum[0] = 0;
        rep(i, s.size()) sum[i + 1] = sum[i] + (s[i] - '0');
        reverse(sum.begin(), sum.end());
        sum.pop_back();
        int prev = 0;
        vector<int> ans;
        for (auto x : sum) {
                ans.push_back((prev + x) % 10);
                prev = (prev + x) / 10;
        }
        if (prev != 0)
                cout << to_string(prev);
        reverse(ans.begin(), ans.end());
        for (auto x : ans) cout << x;
        cout << endl;
}
