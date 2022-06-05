#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<int> p = {1};
        rep(i, n) {
                vector<int> a = {1};
                cout << 1;
                rep(j, i) {
                        a.push_back(p[j] + p[j + 1]);
                        cout << ' ' << a[j + 1];
                }
                cout << endl;
                a.push_back(0);
                p = a;
        }
}
