#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        vector<vector<int>> b;
        b.emplace_back();
        int j = 0;
        rep(i, n) {
                cin >> a[i];
                if (a[i] > x || a[i] < y) {
                        b.emplace_back();
                        j++;
                        continue;
                }
                b[j].push_back(a[i]);
        }

        for(auto c:b){
                
        }
}
