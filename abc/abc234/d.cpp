#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        priority_queue<int, vector<int>, greater<int>> que;
        rep(i, n) {
                int x;
                cin >> x;
                que.push(x);
                if (que.size() > k) que.pop();
                if (i >= k - 1) cout << que.top() << endl;
        }
}
