#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)

using namespace std;

const int MAX_N = 200005;
int par[MAX_N], ran[MAX_N], len[MAX_N];

void init(int n) {
        for (int i = 0; i < n; ++i) {
                par[i] = i;
                ran[i] = 0;
                len[i] = 1;
        }
}

int find(int x) {
        if (par[x] == x) return x;
        else return par[x] = find(par[x]);
}

void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;

        if (ran[x] < ran[y]) {
                par[x] = y;
                len[y] = len[x] + len[y];
        } else {
                par[y] = x;
                len[x] = len[x] + len[y];
                if (ran[x] == ran[y]) ran[x++];
        }
}

bool same(int x, int y) {
        return find(x) == find(y);
}

int main() {
        int n, m;
        cin >> n >> m;
        init(n);
        rep(i, m) {
                int a, b;
                cin >> a >> b;
                a--;
                b--;
                unite(a, b);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
                ans = max(ans, len[find(i)]);
        }
        cout << ans << endl;
        return 0;
}
