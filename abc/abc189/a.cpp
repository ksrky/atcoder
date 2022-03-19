#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        char c1,c2,c3;
        cin >> c1 >> c2 >> c3;
        if(c1==c2&&c2==c3){
                cout << "Won" << endl;
        }
        else{
                cout << "Lost" << endl;
        }
        return 0;
}