#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

bool isSeq(vector<int> v) {
        int d = v[1] - v[0];
        for (int i = 2; i < v.size(); i++) {
                if (v[i] - v[i - 1] != d) return false;
        }
        return true;
}

int main() {
        ll x;
        cin >> x;
        vector<int> v;
        ll y = x;
        while (y > 0) {
                v.push_back(y % 10);
                y /= 10;
        }
        for (int i = 0; i < v.size() - 1; i++) {
                if (isSeq({v.begin(), v.end() - i})) {
                        int d = v[1] - v[0], tmp = v[0] + d * (v.size() - 1 - i);
                        if (tmp < 0 || tmp > 9) continue;
                        ll y = 0;
                        for (int i = 0; i < v.size(); i++) {
                                y += pow(10, v.size() - 1 - i) * (v[0] + d * i);
                        }
                        if (y < x) continue;
                        cout << y << endl;
                        return 0;
                }
        }

}
