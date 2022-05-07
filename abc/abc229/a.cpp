#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == "#." && s2 == ".#") cout << "No" << endl;
        else if (s1 == ".#" && s2 == "#.") cout << "No" << endl;
        else cout << "Yes" << endl;
}
