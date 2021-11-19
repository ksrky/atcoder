#include<bits/stdc++.h>

using namespace std;

int main() {
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;++i){
                cout<<s[i+1];
        }
        cout<<s[0]<<endl;
        return 0;
}