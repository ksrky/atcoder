#include<bits/stdc++.h>
using namespace std;

int main() {
        int h,w;
        cin>>h>>w;
        vector<int> a(h*w);
        int m = 100;
        for(int i=0;i<h*w;i++){
                cin>>a[i];
                m=min(a[i], m);
        }
        int ans=0;
        for(int i=0;i<h*w;i++){
                ans+=a[i]-m;
        }
        cout<<ans<<endl;
}