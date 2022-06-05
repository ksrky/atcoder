#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll mod = 998244353;

int main() {
        vector<int> v = {1, 2, 5};
        auto it = upper_bound(v.begin(), v.end(), 5);
        int pos = distance(v.begin(), it);
        cout << *it << endl;
        cout << pos << endl;
}
