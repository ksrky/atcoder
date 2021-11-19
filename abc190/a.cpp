#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b){
                if(c==0){
                        cout << "Aoki" << endl;
                }
                else{
                        cout << "Takahashi" << endl;
                }
        }
        else{
                if(a>b){
                        cout << "Takahashi" << endl;
                }
                else{
                        cout << "Aoki" << endl;
                }
        }
        return 0;
}