#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        string s;
        cin >> s;
        int num[10] = {0};
        rep(i, 10) {
                if (s[i] == 'o') num[i] = 1;
                if (s[i] == 'x') num[i] = -1;
        }

        int sum = 0;
        rep(i, 10) if (num[i] == 1) sum++;
        if (sum > 4) {
                cout << 0 << endl;
                return 0;
        }

        int ans = 0;
        rep(j1, 10) {
                rep(j2, 10) {
                        rep(j3, 10) {
                                rep(j4, 10) {
                                        bool flag = true;
                                        rep(k, 10) {
                                                if (num[k] == 1 && (j1 == k || j2 == k || j3 == k || j4 == k)) {}
                                                else if (num[k] == 1) flag = false;
                                                if (num[k] == -1 && (j1 == k || j2 == k || j3 == k || j4 == k)) flag = false;
                                        }
                                        if (flag) ans++;
                                }
                        }
                }
        }
        cout << ans << endl;
        return 0;
}