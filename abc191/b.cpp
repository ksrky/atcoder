#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b;
        rep(i,n){
                cin >> a[i];
        }
        rep(i,n){
                if(a[i]!=x){
                        b.push_back(a[i]);
                }
        }
        rep(i, b.size()){
                cout << b[i];
                if(i<b.size()-1){
                        cout << ' ';
                }
        }
        cout << endl;
        return 0;
}