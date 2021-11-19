#include<bits/stdc++.h>

using namespace std;

int main() {
        string s;
        cin >> s;
        int d = s.size();
        for (int i = 0; i < s.size(); ++i) {
                if (s[i] == '.') {
                        d = i;
                        break;
                }
        }
        cout << s.substr(0, d) << endl;
        return 0;
}
