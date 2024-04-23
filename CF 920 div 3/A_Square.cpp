#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll x1,y1,x2,y2,x3,y3,x4,y4;
     cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1==x2 || x1==x4){
        ll r=abs(x1-x3);
        cout<<r*r<<'\n';
    }
    else if(x1==x3){
        ll r=abs(x1-x2);
        cout<<r*r<<'\n';

    }   
 
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}