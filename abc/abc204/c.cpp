#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

vector<int> G[2500];
int rnk[2500];
const int INF = 1 << 20;

int root(int x) {
        int res = 1;
        rnk[x] = 0;
        if (G[x].size() == 0) return 1;
        for (int &i:G[x]) {
                if (rnk[i] > rnk[x]) {
                        rnk[i] = rnk[x] + 1;
                        res += root(i);
                } else {
                        res += 0;
                }
        }
        return res;
}

int main() {
        int n, m;
        cin >> n >> m;
        rep(i, m) {
                int a, b;
                cin >> a >> b;
                a--;
                b--;
                G[a].push_back(b);
        }

        int sum = 0;
        rep(i, n) {
                for (int i = 0; i < 2500; i++) rnk[i] = INF;
                sum += root(i);
        }
        cout << sum << endl;
}