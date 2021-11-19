#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        string s;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == '6') s[i] = '9';
                else if (s[i] == '9') s[i] = '6';
                cout << s[i];
        }
        cout << endl;
}
