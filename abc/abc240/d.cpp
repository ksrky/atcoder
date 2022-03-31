#include <bits/stdc++.h>

using namespace std;

stack<pair<int, int>> st;
int cur = -1, cnt = 1;

void del() {
        if (cur == cnt) {
                for (int j = 0; j < cnt; j++) st.pop();
                if (st.empty()) {
                        cur = -1;
                        cnt = 0;
                } else {
                        auto p = st.top();
                        cur = p.first, cnt = p.second;
                        del();
                }
        }
}

int main() {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                if (cur == a) cnt++;
                else {
                        cur = a;
                        cnt = 1;
                }
                st.emplace(cur, cnt);

                del();
                cout << st.size() << endl;
        }
}
