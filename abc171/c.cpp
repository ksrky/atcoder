#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        ll n;
        cin >> n;
        n--;
        int i = 1;
        vector<char> c;
        while (true) {
                if (n < pow(26, i)) {
                        rep(_, i) {
                                c.push_back('a' + n % 26);
                                n /= 26;
                        }
                        break;
                }
                n -= pow(26, i);
                i++;
        }
        rep(i, c.size()) cout << c[int(c.size()) - 1 - i];
        cout << endl;
        return 0;
}