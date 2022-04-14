#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

vector<int> ans = {1};

vector<int> calc(int n) {
        if (n == 1) return {1};
        vector<int> v = calc(n - 1);
        v.insert(v.end(), {n});
        v.insert(v.end(), v.begin(), v.end());
        v.pop_back();
        return v;
}

int main() {
        int n;
        cin >> n;
        vector<int> v = calc(n);
        for (int i = 0; i < v.size(); i++) {
                cout << v[i];
                if (i < v.size() - 1) cout << ' ';
        }
        cout << endl;
}
