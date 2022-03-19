#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
        int n;
        cin >> n;
        int max1 = 0, max2 = 0, idx1, idx2;
        rep(i,1<<n){
                int a;
                cin >> a;
                if(i<1<<(n-1)){
                        if(max1<a){
                                max1 = a;
                                idx1 = i;
                        }
                }
                else{
                        if(max2<a){
                                max2 = a;
                                idx2 = i;
                        }
                }
        }
        if(max2>max1){
                cout << idx1 + 1 << endl;
        }
        else{
                cout << idx2 + 1 << endl;
        }
}