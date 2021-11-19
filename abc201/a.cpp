#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        double a, b, c;
        cin >> a >> b >> c;
        if (max({a, b, c}) + min({a, b, c}) == (a + b + c) * 2 / 3) cout << "Yes" << endl;
        else cout << "No" << endl;
}