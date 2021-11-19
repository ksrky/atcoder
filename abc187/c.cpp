#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        unordered_set<string> s;
        for (int i = 0; i < n; i++) {
                string x;
                cin >> x;
                s.insert(x);
        }
        for (auto x : s) {
                if(s.count('!' + x)){
                        cout<<x<<endl;
                        return 0;
                }
        }
        cout<<"satisfiable"<<endl;
        return 0;
}