#include<bits/stdc++.h>

using namespace std;

bool solve(string s) {
    if (s.size() == 1) {
        return s[0] == '8';
    } else if (s.size() == 2) {
        if (stoi(s) % 8 == 0) return 1;
        swap(s[0], s[1]);
        if (stoi(s) % 8 == 0) return 1;
        return 0;
    } else {
        vector<int> cnt(10);
        for (auto x:s) cnt[x - '0']++;
        for (int i = 100; i < 1000; i++) {
            if (i % 8 == 0) {
                vector<int> c(10);
                for (auto x:to_string(i)) c[x - '0']++;
                bool res = true;
                for (int j = 0; j < 10; ++j) {
                    if (c[j] > cnt[j]) res = false;
                }
                if (res) return 1;
            }
        }
        return 0;
    }
}

int main() {
    string s;
    cin >> s;
    cout << (solve(s) ? "Yes" : "No") << endl;
    return 0;
}
