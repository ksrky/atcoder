#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        int mxa = 0, mnb = 100000;
        rep(i, n) {
                int a;
                cin >> a;
                mxa = max(mxa, a);
        }
        rep(i, n) {
                int b;
                cin >> b;
                mnb = min(mnb, b);
        }
        cout << max(0, mnb - mxa + 1) << endl;
        return 0;
}