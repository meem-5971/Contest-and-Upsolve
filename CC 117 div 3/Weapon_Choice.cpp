#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll h,x,y,y2,n;
        cin>>h>>x>>y>>y2>>n;
        ll d=0;
     //  ll f=n;
        ll r=ceil((double)((double)h/(double)x));
        if((y*n)>=h){
         d=ceil((double)((double)h/(double)y));
         
        }
        else{
           d+=n;
            ll t=h-(y*n);
            
            d+=ceil((double)((double)t/(double)y2));
        }
        cout<<min((ll)r,(ll)d)<<'\n';
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