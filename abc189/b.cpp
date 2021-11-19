#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int n;
        double x;
        cin >> n >> x;
        double total = 0;
        rep(i,n){
                double v, p;
                cin >> v >> p;
                total += v * p;
                if((total/100)>x){
                        cout << i + 1 << endl;
                        return 0;
                }
        }
        cout << -1 << endl;
        return 0;
}