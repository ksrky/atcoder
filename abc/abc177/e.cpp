#include<bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
        if (y == 0) return x;
        return gcd(y, x % y);
}

vector<int> pf(int n) {
        vector<int> res;
        for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0) res.push_back(i);
                while (n % i == 0) {
                        n /= i;
                }
        }
        if (n > 1) res.push_back(n);
        return res;
}

int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x:a) cin >> x;

        int p[1000005] = {0};
        bool pair = true;
        for (int i = 0; i < n; ++i) {
                vector<int> v = pf(a[i]);
                for (auto x:v) {
                        p[x]++;
                        if (p[x] > 1) pair = false;
                }
        }

        int s = a[0];
        for (int i = 1; i < n; ++i) s = gcd(s, a[i]);
        bool set = (s == 1);

        if (pair) cout << "pairwise coprime" << endl;
        else if (set) cout << "setwise coprime" << endl;
        else cout << "not coprime" << endl;
        return 0;
}