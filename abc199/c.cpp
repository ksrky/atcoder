#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n, q;
        string s;
        cin >> n >> s >> q;
        string str[2];
        str[0] = s.substr(0, n);
        str[1] = s.substr(n, n);
        rep(i, q) {
                int t, a, b;
                cin >> t >> a >> b;
                a--;
                b--;
                if (t == 1) {
                        swap(str[a / n][a % n], str[b / n][b % n]);
                } else {
                        swap(str[0], str[1]);
                }
        }
        cout << str[0] + str[1] << endl;
}
