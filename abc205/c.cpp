#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

char solve(int a, int b){
        if(a>b) return '>';
        else if(a==b) return '=';
        else return '<';
}

int main() {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>0){
                if(b>0){
                        cout<<solve(a,b)<<endl;
                }
                else{
                        if(c%2==0) cout<<solve(a,abs(b))<<endl;
                        else cout<<solve(a,b)<<endl;
                }
        }else{
                if(b>0){
                        if(c%2==0) cout<<solve(abs(a), b)<<endl;
                        else cout<<solve(a,b)<<endl;
                }
                else{
                        if(c%2==0) cout<<solve(abs(a),abs(b))<<endl;
                        else cout<<solve(a,b)<<endl;
                }
        }
}