#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        ll k;
        cin >> k;
        vector<int> v;
        while (k > 0) {
                v.push_back(2 * (k % 2));
                k /= 2;
        }
        for (int i = v.size() - 1; i >= 0; i--) {
                cout << v[i];
        }
        cout << endl;
}
