#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)

using namespace std;

int main() {
    int n;
    cin >> n;
    set<vector<int>> st;
    rep(i, n) {
        int l;
        cin >> l;
        vector<int> a(l);
        for (auto &x: a) cin >> x;
        st.insert(a);
    }

    cout << st.size() << endl;
    return 0;
}
