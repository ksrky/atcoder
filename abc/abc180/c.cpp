#include<bits/stdc++.h>

using namespace std;

int main() {
        long long n;
        cin >> n;
        vector<long long> g;
        for (long long i = 1; i <= sqrt(n); i++) {
                if (n % i == 0) {
                        g.push_back(i);
                        if (i != n / i) g.push_back(n / i);
                }
        }
        sort(g.begin(), g.end());
        for (auto x:g) {
                cout << x << endl;
        }
        return 0;
}