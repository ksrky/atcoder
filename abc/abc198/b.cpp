#include<bits/stdc++.h>

using namespace std;

int main() {
        string n;
        cin >> n;
        bool ans = false;
        for (int i = 0; i < 10; ++i) {
                vector<char> c;
                for (int j = 0; j < i; ++j) c.push_back('0');
                for (int j = 0; j < n.size(); ++j) c.push_back(n[j]);

                bool flag = true;
                for (int j = 0; j < c.size() / 2; ++j) {
                        if (c[j] != c[c.size() - 1 - j]) {
                                flag = false;
                                break;
                        }
                }
                if (flag) {
                        ans = true;
                        break;
                }
        }
        cout << (ans ? "Yes" : "No") << endl;
}
